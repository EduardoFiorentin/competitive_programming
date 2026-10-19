#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 2147483647;

struct equipe {
    int pos;
    int pi;
    int ci;
};

int n;

void troca(struct equipe* orig, struct equipe* dest) {
    dest->pos = orig->pos;
    dest->ci = orig->ci;
    dest->pi = orig->pi;
}

int main() {

    cin >> n;

    struct equipe best, act;
    best.pos = INF;
    best.pi = -1;
    best.ci = INF;

    for (int i = 0; i < n; i++ ) {
        act.pos = i;
        cin >> act.pi >> act.ci;  

        if (act.pi > best.pi) {
            troca(&act, &best);
        }
        else if (act.pi < best.pi) continue;
        else {
            if (act.ci < best.ci) troca(&act, &best);
            else if (act.pi > best.pi) continue;
            else {
                if (act.pos < best.pos) troca(&act, &best);
                else continue;
            }
        }

    }

    cout << best.pos + 1 << "\n";

    return 0;
}