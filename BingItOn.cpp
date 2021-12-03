#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> occur;

    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;

        cout << occur[s] << endl;
        for(int i = 0; i <= s.size(); i++)
            occur[s.substr(0, i)]++;
    }

    return 0;
}