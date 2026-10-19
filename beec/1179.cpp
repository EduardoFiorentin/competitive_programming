#include <bits/stdc++.h>

int i = 0, j = 0, k = 0;
#define for_i(s,k) for (i = s; i < k; i++)
#define for_j(s,k) for (j = s; j < k; j++)
#define for_k(s,l) for (k = s; k < l; k++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

deque<int> even, odd;
int val;

void flush_if_must(deque<int> &deq, string word, bool end) {
    if (deq.size() == 5 || end) {
        for (auto el: deq) {   
            cout << word << "["<< j++ << "] = " << el << endl;
            deq.pop_front();
        }
    }
    j = 0;
}

int main() {

    for_i(0, 15) {
        cin >> val;
        if (val % 2 == 0) even.push_back(val);
        else odd.push_back(val);

        flush_if_must(even, "par", false);
        flush_if_must(odd, "impar", false);
    }

    flush_if_must(odd, "impar", true);
    flush_if_must(even, "par", true);

    return 0;
}