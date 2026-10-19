// knapsack
// problema da mochila

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int N, W;
vector<int> w, v;

ll memo[110][100010];

ll dp(int item, int cap) {
    if (cap < 0) return -LINF;
    if (item == N) return 0;
    ll& p = memo[item][cap];
    if (p != -1) return p;

    return p = max(dp(item+1, cap), dp(item+1, cap-w[item]) + v[item]);
}


int main() {

    cin >> N >> W;
    w.resize(N), v.resize(N);
    for (int i = 0; i<N; i++) cin >> w[i] >> v[i];

    memset(memo, -1, sizeof memo);

    cout << dp(0, W) << endl;

    return 0;
}