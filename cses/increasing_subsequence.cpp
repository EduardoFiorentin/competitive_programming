
// O(n^2) - time limit em alguns casos
// #include <bits/stdc++.h>

// int i = 0, j = 0, k = 0; 
// #define for_i(s,k) for (i = s; i < k; i++)
// #define for_j(s,k) for (j = s; j < k; j++)
// #define for_k(s,m) for (k = s; k < m; k++)

// #define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

// #define ll long long
// #define endl "\n"

// using namespace std;


// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll n, max_l = -1;
//     cin >> n;
//     vector<ll> array(n), length(n);

//     for (ll& it: array) cin >> it;

//     for_k(0, n) {
//         length[k] = 1;
//         for_i(0, k) {
//             if (array[i] < array[k]) {
//                 length[k] = max(length[k], length[i]+1);
//             }
//         }
//     }

//     for (ll it: length) max_l = max(max_l, it);

//     cout << max_l << endl;

//     return 0;
// }


#include <bits/stdc++.h>

int i = 0, j = 0, k = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define for_j(s,k) for (j = s; j < k; j++)
#define for_k(s,m) for (k = s; k < m; k++)

#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define ll long long
#define endl "\n"

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, max_l = -1;
    cin >> n;
    vector<ll> array(n), length(n);

    for (ll& it: array) cin >> it;

    for_k(0, n) {
        length[k] = 1;
        for_i(0, k) {
            if (array[i] < array[k]) {
                length[k] = max(length[k], length[i]+1);
            }
        }
    }

    for (ll it: length) max_l = max(max_l, it);

    cout << max_l << endl;

    return 0;
}