#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

string nome, sn, ganhador;
set<string> sim, nao;
int max_tam_nome = -1;

int main() {

    while (true) {
        cin >> nome;
        if (nome == "FIM") break;
        cin >> sn;
        
        if (sn == "SIM") {
            if ((int)nome.size() > max_tam_nome) {
                max_tam_nome = (int)nome.length();
                ganhador = nome;
                // cout << "Achado" << endl;
            }
        } 

        if (sn == "SIM")    sim.insert(nome);
        else                nao.insert(nome);
    }

    for (auto p: sim) {
        cout << p << endl;
    }
    for (auto p: nao) {
        cout << p << endl;
    }

    cout << endl << "Amigo do Habay:" 
         << endl << ganhador << endl;

    return 0;
}