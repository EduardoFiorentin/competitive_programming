#include <bits/stdc++.h>
using namespace std;

vector<int> vec(10);
int n;

int main() {
    cin >> n;
    
    vec[0] = n;
    for (int i = 1; i < 10; i++) {
        vec[i] = n*=2;
    }

    for (int i = 0; i < 10; i++) {
        cout << "N[" << i << "] = " << vec[i] << "\n";
    }

    return 0;
}