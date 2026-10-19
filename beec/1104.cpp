#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

int A, B, n;

unordered_set<int> set_a, set_b;
int unique_a=0, unique_b=0;

int main() {

    while (true) {
        cin >> A >> B;
        if (A == 0 && A == B) break;

        for_i(0, A) {
            cin >> n; 
            set_a.insert(n);
        }
        for_i(0, B) {
            cin >> n; 
            set_b.insert(n);
        }

        for (auto a: set_a) {
            if (set_b.find(a) == set_b.end()) unique_a++;
        }
        for (auto b: set_b) {
            if (set_a.find(b) == set_b.end()) unique_b++;
        }

        cout << min(unique_a, unique_b) << endl;
        unique_a = 0;
        unique_b = 0;
        set_a.clear();
        set_b.clear();
    }   

    return 0;
}