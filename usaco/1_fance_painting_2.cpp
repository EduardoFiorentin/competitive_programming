#include <bits/stdc++.h>
using namespace std; 

const int MAX = 110;

int main() {
    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);
    
    int a, b, c, d; 
    cin >> a >> b >> c >> d;

    if (a < c) {
        int aux;
        aux = a;
        a = c;
        c = aux;

        aux = b;
        b = d;
        d = aux;
    }

    if (c < b && b < d) {
        cout << d - a << "\n";
    }
    else if (c > b) {
        cout << (b - a) + (d - c) << "\n";
    }
    else {
        cout << (b - a) << "\n";
    }

    return 0;
}