#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

string str;
vector<int> vec(26, 0);
deque<char> deq;

// 65 -> 'A'
// 90 -> 'Z'
int getpos(char c) {return c - 65;}
char charfrompos(int pos) {return (char) ( pos + 65 );}

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
    
    if (idx_impar != -1) {
        char c = charfrompos(idx_impar);
        for_i(0, vec[idx_impar]) deq.push_front(c);
    }

    for_i(0, 26) {
        if (vec[i] > 0 && i != idx_impar) {
            char c = charfrompos(i);
            while (vec[i] != 0) {
                deq.push_front(c);
                deq.push_back(c);
                vec[i] -= 2;
            }
        }
    }

    for (auto c: deq) {
        cout << c;
    }
    cout << endl;
    return 0;
}