#include <bits/stdc++.h>
using namespace std;

string reverse(string s) {
    string ans = "";
    for(int i = s.size()-1; i >= 0; i--)
        ans += s[i];
    return ans;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    while(n--) {
        string s;
        getline(cin, s);
        vector<string> sounds;
        string sound = "";
        for(char c : s) {
            if(c != ' ') sound += c;
            else {
                // cout << sound << endl;
                sounds.push_back(sound);
                sound.clear();
            }
        }
        sounds.push_back(sound);
        sound.clear();


        // for(auto item : sounds)
        //     cout << item << " ";
        // cout << endl;

        string info;
        map<string, int> occur;
        while(getline(cin, info) and info != "what does the fox say?") {
            for(int i = info.size()-1; i >= 0; i--) {
                if(info[i] != ' ') 
                    sound += info[i];
                else {
                    sound = reverse(sound);
                    occur[sound] = 1;
                    // cout << sound << endl;
                    sound.clear();
                    break;
                }
            }
        }
        for(auto item : sounds)
            if(!occur[item]) 
                cout << item << " ";   
    }

    return 0;
}