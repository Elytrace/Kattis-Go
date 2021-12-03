#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int t;
    cin >> t;
    cin.ignore();
    for(int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        if(s.find("simon says ") != string::npos) {
            s.erase(0, 11);
            cout << s << endl;
        }
        else cout << endl;
    }

    return 0;
}