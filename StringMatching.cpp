#include <bits/stdc++.h>
using namespace std;


void addSimilar(int index, string patt, string text, vector<string> &similar, vector<int> &similarIndex) {
    string sml = "";
    for(int i = index; i < index + patt.size(); i++)
        sml += text[i];
    // cout << patt << " " << text << endl;
    // cout << sml << endl;
    similar.push_back(sml);
    similarIndex.push_back(index);
}

int main() {
    ios_base::sync_with_stdio(0);

    vector<string> similar;
    vector<int> similarIndex;
        
    string patt, text;

    while(getline(cin, patt)) {
        getline(cin, text);
        for(int i = 0; i < text.size(); i++)
            if(text[i] == patt[0]) {
                // cout << text[i] << endl;
                addSimilar(i, patt, text, similar, similarIndex);
            }
        // for(auto item : similar)
        //     cout << item << " ";
        
        for(int i = 0; i < similar.size(); i++)
            if(similar[i] == patt) cout << similarIndex[i] << " ";
        
        cout << endl;
    }

    return 0;
}