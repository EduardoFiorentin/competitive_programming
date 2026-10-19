#include <bits/stdc++.h>

using namespace std;

int n;
vector<bool> mapa;

int main() {
    
    cin >> n;
    
    mapa.resize(n);
    
    int j;
    for (int i = 0; i < n-1; i++) {
        cin >> j;
        mapa[j-1] = true;
    }

    for (int i = 0; i < n; i++) {
        if (mapa[i] == 0) {
            cout << i+1 << "\n";
            break;
        } 
    }

    return 0;
}