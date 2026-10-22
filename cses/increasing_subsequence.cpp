#include <bits/stdc++.h>

int i = 0, j = 0, k = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define for_j(s,k) for (j = s; j < k; j++)
#define for_k(s,m) for (k = s; k < m; k++)

#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define ll long long
#define endl "\n"

using namespace std;

// retorna a posição no vetor do elemento procurado
// ou do elemento imediatamente posterior
ll find_pos(vector<ll>& vec, ll item) {
    ll left = 0, right = vec.size() - 1, center = -1, res_idx = -1;
    
    while (left <= right) {
        
        center = (left+right) / 2;
        // cout << center << " ";
        
        if (vec[center] == item) return center;
        else if (vec[center] > item) {
            res_idx = center;
            right = center - 1;
        }
        else left = center + 1;
    }

    return res_idx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    vector<ll> array(n, 0), length(n, numeric_limits<long long>::max());

    for (ll& it: array) cin >> it;
    int pos;
    for (ll it: array) {
        pos = find_pos(length, it);
        length[pos] = it;
    }

    ll max_seq=0;
    for (ll it: length) {
        if (it == numeric_limits<long long>::max()) break;
        max_seq++;
    }
    cout << max_seq << endl;

    return 0;
}