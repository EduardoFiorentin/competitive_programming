#include <bits/stdc++.h>

using namespace std;


int main() {
    unordered_map<int, string> mapa;
    mapa[1] = "Rolien";
    mapa[2] = "Naej";
    mapa[3] = "Elehcim";
    mapa[4] = "Odranoel";

    int n_tc, n_c, c;

    cin >> n_tc;

    for (int i = 0; i < n_tc; i++) {
        cin >> n_c;
        for (int j = 0; j < n_c; j++) {
            cin >> c;
            cout << mapa[c] << endl;
        }
    }


    return 0;
}