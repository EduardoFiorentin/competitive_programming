#include <bits/stdc++.h>

int i = 0, j = 0, k = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define for_j(s,k) for (j = s; j < k; j++)
#define for_k(s,k) for (k = s; k < k; k++)

#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define ll long long
#define endl "\n"

using namespace std;

int D, N;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (cin >> N >> D) {
        if (N == 0 && D == 0) break;

        vector<char> number;
        int qtd_removido = 0;
        char aux;

        for_i(0, N) {
            cin >> aux;

            while (!number.empty() && number.back() < aux && qtd_removido < D) {
                number.pop_back();
                qtd_removido++;
            }

            number.push_back(aux);
        }

        while (qtd_removido < D) {
            number.pop_back();
            qtd_removido++;
        }

        for (auto it : number)
            cout << it;

        cout << endl;
    }
    return 0;
}
