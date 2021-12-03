#include <bits/stdc++.h>
using namespace std;

int main() {
    string n, m;
    cin >> n >> m;
    while(n.size() < m.size())
        n = to_string(0) + n;
    while(n.size() > m.size())
        m = to_string(0) + m;

    string N = "", M = "";

    for(int i = 0; i <= n.size() - 1; i++) {
        if(n[i] > m[i]) N += n[i];
        else if(n[i] < m[i]) M += m[i];
        else if(n[i] == m[i])
            N += n[i], M += m[i]; 
    }

    string ans1 = !N.size() ? "YODA" : to_string(stoi(N));
    string ans2 = !M.size() ? "YODA" : to_string(stoi(M));
    cout << ans1 << endl << ans2; 

    return 0;
}