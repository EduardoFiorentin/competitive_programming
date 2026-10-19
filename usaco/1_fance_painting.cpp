#include <bits/stdc++.h>
using namespace std; 

const int MAX = 110;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    
    int count = 0;
    vector<int> memo(MAX, 0);

    int a, b, c, d; 
    cin >> a >> b >> c >> d;

    for (int i = a; i < b; i++) {
        if (memo[i] == 0) {
            memo[i] = 1;
            count++;
        }
    }

    for (int i = c; i < d; i++) {
        if (memo[i] == 0) {
            memo[i] = 1;
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}