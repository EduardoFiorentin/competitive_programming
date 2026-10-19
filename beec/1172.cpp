#include <bits/stdc++.h>
using namespace std;

vector<int> vec(10);

int main() {
    
    int aux;
    for (int& v: vec) {
        cin >> aux;
        v = aux <= 0 ? 1 : aux;
    }

    for (int i = 0; i < 10; i++) {
        cout << "X[" << i << "] = " << vec[i] << "\n";
    }

    return 0;
}