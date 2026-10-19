#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, j, m_sum = 0;
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> j;
        m_sum += j;
    }   
    if (m_sum > 120) m_sum += 180;
    if (m_sum > 720) m_sum += 180;
    cout << m_sum << endl;
    return 0;
}