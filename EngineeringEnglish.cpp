#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> appear;
    string s;
    while(getline(cin, s)) {
        string word_in = "";
        string word_out = "";
        for(char c : s) {
            if(c != ' ') {
                word_in += ('a' <= c and c <= 'z' ? c : c + 32);
                word_out += c;
            }
            else {
                if(!appear[word_in]) {
                    appear[word_in] = 1;
                    cout << word_out << " ";
                }
                else {
                    cout << ". ";
                } 
                word_in.clear();
                word_out.clear();
            }
        }
        if(!appear[word_in]) {
            appear[word_in] = 1;
            cout << word_out << " " << endl;
        }
        else {
            cout << ". " << endl;
        }
    }

    return 0;
}