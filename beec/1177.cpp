#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

vector<int> vec(1000);
int n;

int main() {

    cin >> n;
    for_i(0, 1000) vec[i] = i % n;
    
    for (int j = 0; j < 1000; j++) {
        cout << "N[" << j << "] = " << vec[j] << endl;
    }

    return 0;
}