#include <bits/stdc++.h>

int i = 0, j = 0, k = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define for_j(s,k) for (j = s; j < k; j++)
#define for_k(s,m) for (k = s; k < m; k++)

#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define ll long long
#define LINF 0x3f3f3f3f3f3f3f3fll;
#define endl "\n"

using namespace std;

int N, W;
vector<int> w, v;

ll memo[101][100001];

ll dp(int item, int cap) {
    if (cap < 0) return -LINF;
    if (item == N) return 0;
    ll& p = memo[item][cap];
    if (p != -1) return p;

    return p = max(dp(item+1, cap), dp(item+1, cap-w[item]) + v[item]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> W;
    w.resize(N), v.resize(N);
    for (int i = 0; i<N; i++) cin >> w[i] >> v[i];

    memset(memo, -1, sizeof memo);

    cout << dp(0, W) << endl;

    return 0;
}