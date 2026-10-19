#include <bits/stdc++.h>
using namespace std; 

unordered_map<string, string> dict; 
int n, m;
string lang, transl, name;

int main() {
 
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, lang);
        getline(cin, transl);
        dict[lang] = transl;
    }

    // cout << "ing: " << dict["ingles"] << "\n";
    // cout << "fr: " << dict["frances"] << "\n";

    cin >> m;
    cin.ignore();

    for (int i = 0; i < m; i++) {
        getline(cin, name);
        getline(cin, lang);
        
        cout << name << "\n" << dict[lang] << "\n\n";
    }

    return 0;
}