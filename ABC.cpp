#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);
    // cout << a << " " << b << " " << c;
    map<char, int> value;
    value['A'] = a;
    value['B'] = b;
    value['C'] = c;


    string s;
    cin >> s;
    for(char c : s) cout << value[c] << " ";

    return 0;
}