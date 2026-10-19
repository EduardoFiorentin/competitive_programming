#include <bits/stdc++.h>
 
using namespace std;
 
int solve(int x, int y) {
    // int l = (int) x / 1;
    // int h = (int) y / 7;
    // return l*h;
    return x*(y / 7);
}

int main() {
    
    int x, y;
    cin >> x >> y;

    cout << max(solve(x, y), solve(y, x)) << endl;

    return 0;
}