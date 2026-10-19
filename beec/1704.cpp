#include <bits/stdc++.h>
using namespace std;

int i = 0, j = 0, k = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define for_j(s,k) for (j = s; j < k; j++)
#define for_j(s,k) for (k = s; k < k; k++)

#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h;

    while (cin >> n >> h) {
        vector<pair<ll, int>> tasks;
        ll totalValue = 0;

        for (int i = 0; i < n; i++) {
            ll value;
            int deadline;
            cin >> value >> deadline;

            tasks.push_back({value, deadline});
            totalValue += value;
        }

        sort(tasks.begin(), tasks.end(), [](const auto& a, const auto& b) {
            if (a.first != b.first)
                return a.first > b.first;

            return a.second < b.second;
        });

        vector<bool> occupied(h + 1, false);
        ll earned = 0;

        for (const auto& task : tasks) {
            ll value = task.first;
            int deadline = task.second;

            for (int hour = min(h, deadline); hour >= 1; hour--) {
                if (!occupied[hour]) {
                    occupied[hour] = true;
                    earned += value;
                    break;
                }
            }
        }

        cout << totalValue - earned << endl;
    }
}