#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string, vector<string>> Map;

    string in;
    while(cin >> in)
    {
        vector<string> vec;
        for (auto it = Map.begin(); it != Map.end(); ++it) {
            if (it->first != in) it->second.push_back(in);
            else vec.push_back(it->first);
        }
        Map[in] = vec;
    }

    set<string> Set;
    for (auto it = Map.begin(); it != Map.end(); ++it) {
        vector<string> vec = it->second;
        for (auto it2 = vec.begin(); it2 != vec.end(); ++it2) {
            Set.insert(it->first + *it2);
            Set.insert(*it2 + it->first);
        }
    }

    for (auto it = Set.begin(); it != Set.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}