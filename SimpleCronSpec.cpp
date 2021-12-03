#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int numOfSec = 0, numOfJob = 0;

    int stt[24][60][60] = {0};

    while(n--) {
        string h, m, s;
        cin >> h >> m >> s;
        
        vector<int> second;
        string temp = "";
        if(s == "*")
            for(int j = 0; j < 60; j++)
                second.push_back(j);
        else {
            for(int i = 0; i < s.size(); i++) {
                if(s[i] != ',' and s[i] != '-') temp += s[i];
                else if(s[i] == ',') {
                    second.push_back(stoi(temp));
                    temp.clear();
                }
                else {
                    int sec = (s[i+1] - '0') * 10 + s[i+2] - '0';
                    for(int v = stoi(temp); v < sec; v++)
                        second.push_back(v);
                    temp.clear();
                }
            }
            second.push_back(stoi(temp));
        }

        vector<int> minute;
        temp.erase();
        if(m == "*")
            for(int j = 0; j < 60; j++)
                minute.push_back(j);
        else {
            for(int i = 0; i < m.size(); i++) {
                
                if(m[i] != ',' and m[i] != '-') temp += m[i];
                else if(m[i] == ',') {
                    minute.push_back(stoi(temp));
                    temp.clear();
                }
                else {
                    int min = (m[i+1] - '0') * 10 + m[i+2] - '0';
                    for(int v = stoi(temp); v < min; v++)
                        minute.push_back(v);
                    temp.clear();
                }
            }
            minute.push_back(stoi(temp));
        }

        vector<int> hour;
        temp.erase();
        if(h == "*")
            for(int j = 0; j < 24; j++)
                hour.push_back(j);
        else {
            for(int i = 0; i < h.size(); i++) {
                if(h[i] != ',' and h[i] != '-') temp += h[i];
                else if(h[i] == ',') {
                    hour.push_back(stoi(temp));
                    temp.clear();
                }
                else {
                    int hr = (h[i+1] - '0') * 10 + h[i+2] - '0';
                    for(int v = stoi(temp); v < hr; v++)
                        hour.push_back(v);
                    temp.clear();
                }
            }
            hour.push_back(stoi(temp));
        }
        
        // for(int hr : hour) cout << hr << " "; cout << endl;
        // for(int me : minute) cout << me << " "; cout << endl;
        // for(int sd : second) cout << sd << " "; cout << endl;

        numOfJob += hour.size() * minute.size() * second.size();
        for(int item1 : hour)
            for(int item2: minute)
                for(int item3: second) 
                    stt[item1][item2][item3] = 1;           
    }

    for(int i = 0; i < 24; i++)
        for(int j = 0; j < 60; j++)
            for(int k = 0; k < 60; k++) 
                if(stt[i][j][k]) numOfSec++;

    cout << numOfSec << " " << numOfJob << endl; 

    return 0;
}