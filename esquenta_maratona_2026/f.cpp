#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
vector<int> t;

int main() {

    cin >> n;
    t.resize(n);
    for (int& i: t) cin >> i; 

    ll soma = 0;
    sort(t.begin(), t.end());

    for (int i = 0; i < t.size(); i++) {
        cout << soma << endl;
        soma += t[i];
    }

    cout << soma << "\n";
    return 0;
}