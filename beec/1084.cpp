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
        
        string number;
        int qtd_removido = 0;
        char aux;

        cin >> number;

        // for_i(0, 10) {
        //     aux = i + '0';

        //     for_j(0, number.size()) {
        //         if (qtd_removido == D) goto end;

        //         if (number[j] == aux) {
        //             number[j] = ' ';
        //             qtd_removido++;
        //         }
        //     }
        // }

        

        end:
        for (char item : number) {
            if (item != ' ') cout << item;
        }
        cout << endl << flush;
    }

    return 0;
}