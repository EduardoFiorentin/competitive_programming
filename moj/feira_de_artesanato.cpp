#include <bits/stdc++.h>

int i = 0, j = 0, k = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define for_j(s,k) for (j = s; j < k; j++)
#define for_k(s,lim) for (k = s; k < lim; k++)

#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define ll long long
#define endl "\n"

using namespace std;


typedef struct {
    int type = 0;
    int value = 0;
} Prod;

int N, T, C;
// vector<int> types, values;

// ordena por valor dentro dos limites dos tipos
bool prods_cresc_type_value(const Prod& a, const Prod& b) {
    // if (a.value != b.value) return a.value < b.value;
    // else return a.type <= b.type;
    if (a.type == b.type) return a.value < b.value;
    else return a.type < b.type;
}

bool prods_cresc_just_value(const Prod& a, const Prod& b) {
    if (a.value != b.value) return a.value < b.value;
    else return a.type < b.type;
}

vector<Prod> products_ordered, products_ord_type;
// set<Prod, decltype(&prods_cresc)> prod_set(prods_cresc);
// typedef multiset<Prod, decltype(&prods_cresc)> ProdSet;

typedef multiset<Prod, decltype(&prods_cresc_just_value)> ProdSet;
ProdSet prod_set(prods_cresc_just_value);

// unordered_map<int, ProdSet> um_prods;
map<int, pair<int, int>> limites; // tipo -> [inicio, fim)


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> T;
    
    products_ordered.resize(N);
    products_ord_type.resize(N);

    int aux;
    for_i(0, N){
        cin >> aux;
        products_ordered[i].type = aux;
        products_ord_type[i].type = aux;
    }
    for_i(0, N){
        cin >> aux;
        products_ordered[i].value = aux;
        products_ord_type[i].value = aux;
    }

    // sort(products_ordered.begin(), products_ordered.end(), prods_cresc_just_value);
    sort(products_ord_type.begin(), products_ord_type.end(), prods_cresc_type_value);

    // for (Prod item: products_ordered) cout << "["<< item.type << " " << item.value << "]\n";

    for (Prod item: products_ordered) prod_set.insert(item);

    for_i(0, N){
        int tipo = products_ord_type[i].type;

        if (!limites.count(tipo)) limites[tipo] = {i, i + 1};
        else limites[tipo].second = i + 1;
    }

    cin >> C;
    ll total = 0;

    for_i(0, C){
        int u;
        cin >> u;

        if (prod_set.empty()) continue;

        Prod vendido;

        if (u == 0){
            vendido = *prod_set.begin();
        } else {
            auto it = limites.find(u);

            if (it == limites.end() || it->second.first == it->second.second) // acabou daquele tipo
                continue;

            vendido = products_ord_type[it->second.first];
        }

        total += vendido.value;
        prod_set.erase(prod_set.find(vendido)); // remove so uma ocorrencia
        limites[vendido.type].first++; // remocao logica no vector
    }

    cout << total << endl;
    
    return 0;
}