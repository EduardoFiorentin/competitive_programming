#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    
    int A, B;
    cin >> A >> B;
    bool isMult = 
        A > B ? 
        A % B == 0 : 
        B % A == 0;

    cout << (isMult ? "Multiples" : "No Multiples") << "\n";
    return 0;
}