#include <bits/stdc++.h>
using namespace std;

bool cmp(string first, string second) {
    return (first.substr(0, 2) < second.substr(0, 2));
}

int main() {
    int n;
    while(cin >> n and n != 0) {
        vector<string> names (n, "");
        for(int i = 0; i < n; i++) cin >> names[i];
        stable_sort(names.begin(), names.end(), cmp);
        for(int i = 0; i < n; i++) cout << names[i] << endl;
        cout << endl;
    }

    return 0;
}