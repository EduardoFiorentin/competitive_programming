#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"
#define ll long long

using namespace std;

map<ll, ll> mapa;
ll n, a;

int main() {

    while (cin >> n) {
        if (n == 0) break;

        for_i(0, n) {
            cin >> a;
            mapa[a]++;
        }

        for (auto item: mapa) {
            if (item.second % 2 != 0) {
                cout << item.first << endl;
                break;
            }
        }
        mapa.clear();
    }

    return 0;
}