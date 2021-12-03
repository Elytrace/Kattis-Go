#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = 1;
    double length = 0;
    if(s == "1") cout << 1 << endl;
    else if(s == "2") cout << 2 << endl;
    else if(s == "6") cout << 3 << endl;
    else if(s == "24") cout << 4 << endl;
    else {
        while(ceil(length) < s.length()) {
            length += log10(n++);
        }
        cout << n-1 << endl;
    }
    return 0;
}