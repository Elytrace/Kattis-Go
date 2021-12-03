#include <bits/stdc++.h>
using namespace std;

int main() {
    string line;
    map <string, string> words;
    vector<string> appear;
    while(getline(cin, line) and line != "") {
        string en, fo;
        int spaceIndex = line.find(' ');
        en = line.substr(0, spaceIndex);
        fo = line.substr(spaceIndex+1, line.size()-1);

        appear.push_back(fo);
        words[fo] = en;
    }

    while(getline(cin, line)) {
        if(words[line] != "") {
            cout << words[line] << endl;
        }
        else cout << "eh" << endl;
    }

    return 0;
}