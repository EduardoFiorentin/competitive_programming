#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

int n;
long long x;
map<long long, int> mapa;

int main() {

    cin >> n;
    for_i(0, n) {
        cin >> x;
        mapa[x] = 1;
    }

    cout << mapa.size() << endl;

    return 0;
}