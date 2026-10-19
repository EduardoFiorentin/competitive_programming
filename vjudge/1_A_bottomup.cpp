// Frog

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 2147483647; // valor máximo para int (4B)


int N, K;
vector<int> h; 

const int MAX = 10e5+10;
int memo[MAX];



int main() {

    cin >> N >> K;
    
    // ajustes de memoria
    h.resize(N);
    // OBS: memset só funciona para preencher o vetor com -1 por que a representação de -1 em complemento de 2 usa todos os caracteres iguais em cada byte (11111111)
    // Se fosse outro numero (como 2), o comportamento de população byte a byte do memset não funcionaria para popular os ints do vetor
    memset(memo, -1, sizeof memo);
    
    for (int &i:h) cin >> i;

    memo[0] = 0;
    for (int i = 1; i < N; i++) {
        int better = INF;
        for (int j = max(0, i-K); j < i; j++) {
            better = min(better, memo[j] + abs(h[i] - h[j]));
        }
        memo[i] = better;
    }

    cout << memo[N-1] << endl;

    return 0;
}