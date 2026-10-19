#include <bits/stdc++.h>
using namespace std;

string linha;
int qtd = 0;

int main() {
    
    bool valid = true;

    while (getline(cin, linha)) {
        for (char c: linha) {
            if (!valid) break;
            if (c == '(') qtd++;
            else if (c == ')') {
                if (qtd <= 0) {
                    valid = false;
                    break;
                } 
                else qtd--;
            }
        }
        if (valid && qtd == 0) cout << "correct" << "\n"; 
        else cout << "incorrect" << "\n";
        valid = true;
        qtd = 0;
    }
    
    return 0;
}