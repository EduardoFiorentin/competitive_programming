// Rails

#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

int n, r, k, fim;
stack<int> stk;
list<int> lst;

int main() {
    while (true) {
        cin >> n;
        if (n == 0) break;
        else fim = 0;
        
        while (true) {
            k = n;
            for_i(0, n) {
                cin >> r;
                if (r == 0) {
                    fim = 1;
                    break;
                }
                lst.push_back(r);
            }
            if (fim) break;
            for_i(0, n) {
                r = lst.back();
                lst.pop_back();

                stk.push(r);
                while (!stk.empty()) {
                    if (stk.top() == k) {
                        stk.pop();
                        k--;
                    } 
                    else {
                        break;
                    }
                }
            }

            if (fim) break;
            
            if (stk.empty()) cout << "Yes" << endl;
            else {
                cout << "No" << endl;
            }
            while (!stk.empty()) stk.pop();
            while (!lst.empty()) lst.pop_back();
        }
        cout << endl;
    }

    return 0;
}