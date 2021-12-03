#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, string> alpha_map {
            {'A', "@"},
            {'B', "8"},
            {'C', "("},
            {'D', "|)"},
            {'E', "3"},
            {'F', "#"},
            {'G', "6"},
            {'H', "[-]"},
            {'I', "|"},
            {'J', "_|"},
            {'K', "|<"},
            {'L', "1"},
            {'M', "[]\\/[]"},
            {'N', "[]\\[]"},
            {'O', "0"},
            {'P', "|D"},
            {'Q', "(,)"},
            {'R', "|Z"},
            {'S', "$"},
            {'T', "']['"},
            {'U', "|_|"},
            {'V', "\\/"},
            {'W', "\\/\\/"},
            {'X', "}{"},
            {'Y', "`/"},
            {'Z', "2"}
    };
    string s;
    getline(cin, s);
    for (char c : s) {
        if ('a' <= c && c <= 'z') cout << alpha_map[c - 32].c_str();
        else if ('A' <= c && c <= 'Z') cout << alpha_map[c].c_str();
        else cout << c;
    }
    return 0;
}