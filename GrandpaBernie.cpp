#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    
    map<string, vector<int>> map;
    string country;
    int year;
    while(n--) {
        cin >> country >> year;
        map[country].push_back(year);
        sort(map[country].begin(), map[country].end());
    }

    int q;
    cin >> q;
    int index;
    while(q--) {
        cin >> country >> index;
        cout << map[country][index-1] << endl; 
    }

    return 0;
}