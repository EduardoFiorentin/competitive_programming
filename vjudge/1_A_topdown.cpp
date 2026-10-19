// Frog

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 2147483647; // valor máximo para int (4B)


int N, K;
vector<int> h; 

const int MAX = 10e5+10;
int memo[MAX];


int solve(int i) {
    // caso base 
    if (i == 0) return 0;

    // memoização
    if (memo[i] != -1) return memo[i];

    int ret = INF;

    for (int j = max(0, i-K); j < i; j++) {
        ret = min(ret, solve(j) + abs(h[j] - h[i]));
    }

    return memo[i] = ret;   // salva cada novo valor ótimo que encontrar 
}



int main() {

    cin >> N >> K;
    
    // ajustes de memoria
    h.resize(N);
    // OBS: memset só funciona para preencher o vetor com -1 por que a representação de -1 em complemento de 2 usa todos os caracteres iguais em cada byte (11111111)
    // Se fosse outro numero (como 2), o comportamento de população byte a byte do memset não funcionaria para popular os ints do vetor
    memset(memo, -1, sizeof memo);
    
    for (int &i:h) cin >> i;

    cout << solve(N-1) << endl;

    return 0;
}