#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, k, p, m, v;
bool probs_solved[17];
int total_pen[17];
int pen_sum = 0;
int probs_sum = 0;

int main() {

    memset(probs_solved, 0, sizeof probs_solved);
    memset(total_pen, 0, sizeof total_pen);

    cin >> n >> k; 

    for (int i = 0; i < n; i++) {
        cin >> p >> m >> v;

        if (v == 0 && probs_solved[p-1] == 0) {
            total_pen[p-1] += 20;
        }
        else if (v == 1 && probs_solved[p-1] == 0) {
            probs_solved[p-1] = 1;
            total_pen[p-1] += m;
            probs_sum++;
        }

    }

    int j = 0;
    for (int i: total_pen) {
        if (probs_solved[j]) pen_sum+=i; 
        j++;
    }

    cout << probs_sum << " " << pen_sum << "\n";


    return 0;
}