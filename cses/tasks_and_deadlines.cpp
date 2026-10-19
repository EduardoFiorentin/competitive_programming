#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"
#define ll long long

using namespace std;

vector<pair<int,int>> mapa;
int n, a, d;
ll rew = 0, deadline = 0;

int main() {

    cin >> n;
    
    for_i(0, n) {
        cin >> a >> d;
        mapa.push_back({a, d});
    }

    sort(mapa.begin(), mapa.end(), [](const pair<int,int>& a, const pair<int,int>& b){
        return a.first < b.first;
    });

    for(auto el: mapa) {
        deadline += el.first;
        rew += (el.second - deadline);
    }

    cout << rew << endl;

    return 0;
}