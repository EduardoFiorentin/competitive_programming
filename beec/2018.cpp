#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

typedef struct rank {
    int primeiro = 0;
    int segundo = 0;
    int terceiro = 0;
} Rank;

string pais;

map<string, Rank> rank_map;
vector<pair<string, Rank>> rank_vec;

int main() {

    while (getline(cin, pais)) {

        for_i(0, 3) {
            getline(cin, pais);

            if (i == 0) {
                rank_map[pais].primeiro++;
            }    
            else if (i == 1) {
                rank_map[pais].segundo++;
            }
            else {
                rank_map[pais].terceiro++;
            }
        }
    }

    copy(rank_map.begin(), rank_map.end(), back_inserter(rank_vec));

    sort(rank_vec.begin(), rank_vec.end(), [](const pair<string, Rank>& a, const pair<string, Rank>& b) {

        if (a.second.primeiro != b.second.primeiro) {
            return a.second.primeiro > b.second.primeiro;
        }

        
        if (a.second.segundo != b.second.segundo) {
            return a.second.segundo > b.second.segundo;
        }

        if (a.second.terceiro != b.second.terceiro) {
            return a.second.terceiro > b.second.terceiro;
        }

        return a.first < b.first;
    });

    cout << "Quadro de Medalhas" << endl;

    for (auto item : rank_vec) {
        cout << item.first 
             << " " << item.second.primeiro
             << " " << item.second.segundo
             << " " << item.second.terceiro
             << endl;
    }

    return 0;
}