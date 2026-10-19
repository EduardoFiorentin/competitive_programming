// Dangerous Dive

#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

int n, r, e;
vector<int> vec;

int main() {

    while (cin >> n >> r) {

        // todos voltaram - consome as entradas e dá a resposta
        if (n == r) {
            for (i = 0; i < n; i++) cin >> e;
            cout << "*\n";
            continue;
        }

        vec.resize(n+1);
        fill(vec.begin(), vec.end(), 0);
        // coletar os que voltaram e comparar
        for_i(0, r) {
            cin >> e;
            vec[e] = 1;
        }
        for_i(1, n+1) {
            if (!vec[i]) cout << i << ' ';
        }
        cout << endl;
    }

    return 0;
}