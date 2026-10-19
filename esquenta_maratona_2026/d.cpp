#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 2147483647;

int t, l, r;

int main() {

    cin >> t >> l >> r;
    
    if (t > l) {
        cout << "Time Limit Exceeded\n"; 
    }
    else if (r == 0) {
        cout << "Wrong Answer\n";
    }
    else {
        cout << "Accepted\n";
    }


    return 0;
}