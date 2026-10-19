#include <bits/stdc++.h>

int i = 0, j = 0, k = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define for_j(s,k) for (j = s; j < k; j++)
#define for_j(s,k) for (k = s; k < k; k++)

#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define ll long long
#define endl "\n"

using namespace std;

vector<int> values = {100, 20, 10, 5, 1};
ll value;
int cont = 0, it = 0, aux;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> value;

    while(it != values.size()) {
        aux = value / values[it];
        cont += aux;
        value -= values[it] * aux;
        it++;
    }

    cout << cont << endl;

    return 0;
}