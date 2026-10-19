#include <bits/stdc++.h>

int i = 0, j = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define for_j(s,k) for (j = s; j < k; j++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define ll long long
#define endl "\n"

using namespace std;

int nc, n, h;
vector<int> sizes;

int main() {

    cin >> nc;
    for_i(0, nc) {
        cin >> n;
        sizes.resize(n);

        for_j(0, n) cin >> sizes[j];

        sort(sizes.begin(), sizes.begin()+n);

        cout << sizes[0];
        for_j(1, n) cout << " " << sizes[j];
        cout << endl;
    }

    return 0;
}