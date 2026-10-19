#include <bits/stdc++.h>
using namespace std;

stack<char> stk;
string linha;

int main() {
    
    bool valid = true;
    while (getline(cin, linha)) {
        for (char c: linha) {
            if (!valid) break;
            if (c == '(') stk.push('(');
            else if (c == ')') {
                if (stk.empty()) {
                    valid = false;
                    break;
                } 
                else stk.pop();
            }
        }
        if (valid && stk.empty()) cout << "correct" << "\n"; 
        else cout << "incorrect" << "\n";
        while (!stk.empty()) stk.pop();
        valid = true;
    }

    
    return 0;
}