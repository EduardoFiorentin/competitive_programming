#include <bits/stdc++.h>

using namespace std;

char atual, anterior;
int tam_max = 1, tam_at = 1;
string str;

int main() {

    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        atual = str[i];
        if (i != 0) {
            if (atual == anterior) {
                tam_at++;
                if (tam_max < tam_at) tam_max = tam_at;
            }
            else {
                tam_at = 1;
            }
        }
        anterior = atual;
        
    }

    cout << tam_max << "\n";

}