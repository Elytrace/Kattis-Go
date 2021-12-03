#include <bits/stdc++.h>
using namespace std;

void mySort(vector<string> &str, vector<int> &strDis) {
    for(int i = 0; i < str.size(); i++) 
        for(int j = i+1; j < str.size(); j++) {
            if(strDis[i] > strDis[j]) {
                swap(str[i], str[j]);
                swap(strDis[i], strDis[j]); 
            }
            else if(strDis[i] == strDis[j]) {
                if(str[i] > str[j]) swap(str[i], str[j]);
            }
        }
}

int main() {
    char line[3][10] = {
                        {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
                        {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ' '},
                        {'z', 'x', 'c', 'v', 'b', 'n', 'm', ' ', ' ', ' '} 
                       };

    map<char, int> row;
    map<char, int> col;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 10; j++) {
            row[line[i][j]] = i+1; 
            col[line[i][j]] = j+1;
        }
    

    int n;
    cin >> n;
    while(n--) {
        string s; int t;
        cin >> s >> t;

        vector<string> str;
        vector<int> strDis;
        for(int i = 0; i < t; i++) {
            string c;
            cin >> c;
            int ans = 0;
            for(int j = 0; j < s.size(); j++) 
                ans += abs(row[s[j]] - row[c[j]]) + abs(col[s[j]] - col[c[j]]);
            str.push_back(c);
            strDis.push_back(ans);
        }
        mySort(str, strDis);
        for(int i = 0; i < t; i++) 
            cout << str[i] << " " << strDis[i] << endl;

    }

    return 0;
}