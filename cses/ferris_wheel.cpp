#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"
#define ll long long
using namespace std;

int n, j, k;
ll x, aux, cont;
vector<ll> mapa;

int main() {

    cin >> n >> x;
    mapa.resize(n);

    for_i(0, n) {
        cin >> aux;
        mapa[i] = aux;
    }

    sort(mapa.begin(), mapa.end());

    j = 0; 
    k = n-1;
    while (j <= k) {

        if (j == k) {
            cont++;
            break;
        }

        if (mapa[j] + mapa[k] <= x) {
            j++;
            k--;
            cont++;
        }
        else {
            cont++;
            k--;
        }
    }

    cout << cont << endl;

    return 0;
}