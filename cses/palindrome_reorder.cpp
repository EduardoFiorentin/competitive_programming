#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

string str;
vector<int> vec(26, 0);

// 65 -> 'A'
// 90 -> 'Z'
int getpos(char c) {return c - 65;}

const int MAX = 10e6+1;
char resp[MAX];

int main() {

    getline(cin, str);
    for (char c: str) {
        vec[getpos(c)]++;
    }

    int impares = 0, idx_impar = -1;
    for_i(0, 26) {
        if (vec[i] % 2 != 0) {
            impares++;
            idx_impar = i;
        }
    }
    
    if (impares > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    int j=0, k=(int)str.length();

    resp[k] = '\0'; 
    k--;
    for_i(0, 26) {
        if (vec[i] > 0 && i != idx_impar) {
            while (vec[i] != 0) {
                resp[j] = 65+i; j++;
                resp[k] = 65+i; k--;
                vec[i] -= 2;
            }
        }
    }

    if (idx_impar != -1) {
        while (vec[idx_impar] != 1) {
            resp[j] = 65+idx_impar; j++;
            resp[k] = 65+idx_impar; k--;
            vec[idx_impar] -= 2;
        }
        resp[j] = 65+idx_impar;
    }

    cout << resp << endl;
    return 0;
}