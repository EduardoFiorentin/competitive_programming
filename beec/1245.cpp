// lost boots

#include <bits/stdc++.h>

using namespace std;

int n, m, pairs=0;
char l;
vector vec(61, 0);

int main() {
   
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> m >> l;            
            if (l == 'E') {
                if (vec[m] >= 0) vec[m]++;
                else {
                    pairs++;
                    vec[m]++;
                }
            }
            else {
                if (vec[m] <= 0) vec[m]--;
                else {
                    pairs++;
                    vec[m]--;
                }
            }
        }
        cout << pairs << "\n";
        pairs = 0;    
        fill(vec.begin(), vec.end(), 0);
    }

    return 0;
}