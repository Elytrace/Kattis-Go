#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        map<string, vector<string>> map;

        string s;
        while(getline(cin, s)) {
            int index = s.find(':');
            string fileRoot = s.substr(0, index);
            cout << fileRoot << endl;

            string file = "";
            for(int i = index+2, i < s.size(); i++) {
                if(s[i] != ' ') file += s[i];
                else {
                    map[fileRoot].push_back(file);
                    file.clear();
                }
            }
        }
        cin >> s;
        vector<string> recomplied;
        recomplied.push_back(s);
        for(auto item : map) {
            if(find(item.second.begin(), item.second.end(), s) != item.second.end()) {
                recomplied.push_back(item);
            }
        }
    }

    return 0;
}