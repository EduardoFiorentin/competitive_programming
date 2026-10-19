#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define INF 0x7ffffff0
const int MAX_MEMO = 10000010;

int NC, VAL;
vector<int> coins;
int memo[MAX_MEMO];

int solve(ll n) {
    if (n < 0) return INF;
    if (n == 0) return 0;
    if (memo[n] != -1) return memo[n];

    int slv = INF;
    for (int coin: coins) {
        slv = min(slv, 1 + solve(n-coin));
    }

    return memo[n] = slv;
}

int main() {

    cin >> NC >> VAL;
    coins.resize(NC);

    memset(memo, -1, sizeof memo);

    for (int& val: coins) cin >> val;

    int res = solve(VAL) % ((int)10e9+7);
    cout << (res == INF ? -1 : res) << "\n";

    return 0;
}