#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> valor_posicao(n);

    for (int i = 0; i < n; i++) {
        cin >> valor_posicao[i].first;
        valor_posicao[i].second = i;
    }

    sort(valor_posicao.begin(), valor_posicao.end());

    int i = 0, j = (n - 1);
    while (i < j) {
        if ((valor_posicao[i].first + valor_posicao[j].first) == x) {
            cout << (valor_posicao[i].second + 1) << " " << (valor_posicao[j].second + 1) << endl;
            return 0;
        }
        else if ((valor_posicao[i].first + valor_posicao[j].first) > x) {
            j--;
        }
        else {
            i++;
        }
    }
    

    cout << "IMPOSSIBLE\n";
    return 0;
}