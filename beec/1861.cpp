// Hall of Murderers

#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;
string murder, killed;
set<string> murders, killeds; 
map<string, int> murders_count;

int main() {

    while (cin >> murder >> killed) {
        if (murder == "end") break;
        murders.insert(murder);
        killeds.insert(killed);
        murders_count[murder]++;
    }

    set<string> murders_alive; 

    set_difference(
        murders.begin(), murders.end(),
        killeds.begin(), killeds.end(),
        inserter(murders_alive, murders_alive.begin())
    );

    cout << "HALL OF MURDERERS" << endl;
    for (string murd: murders_alive) cout << murd << " " << murders_count[murd] << endl;

    return 0;
}