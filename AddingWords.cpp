#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string cmd;
    map<int, string> value;
    for(int i = -1000; i <= 1000; i++)
        value[i] = "unknown";
    map<string, int> valuee;
    // for(string s : value) cout << s << endl;
    while(getline(cin, cmd) and cmd != "clear") {
        if(cmd.find("def") == 0) {
            int varLength = cmd.substr(4, cmd.size()-4).find(' ');
            // cout << varLength << endl;
            string var = cmd.substr(4, varLength);
            // cout << var << endl;
            int val = 0;
            bool adding = true;
            if(cmd[4 + varLength + 1] == '-') adding = false;
            for(int i = 4 + varLength + 1; i < cmd.size(); i++) 
                if('0' <= cmd[i] and cmd[i] <= '9') {
                    // cout << i << " " << cmd[i] << endl;
                    val += (adding ? (cmd[i] - '0') * pow(10, cmd.size()-1-i) : - (cmd[i] - '0') * pow(10, cmd.size()-1-i));
                    // cout << val << "!" << endl;
                }
            // cout << val << endl;
            value[val] = var;
            // cout << var << endl;
            valuee[var] = val;
            // cout << val << " " << var << endl;
            
        }
        else if(cmd.find("calc") == 0) {
            string s = "";    
            int sum = 0;
            bool valid = true;
            bool adding = true;
            for(int i = 5; i < cmd.size(); i++) {    

                if('a' <= cmd[i] and cmd[i] <= 'z')
                    s += cmd[i];
                if(cmd[i] == '+') {
                    if(valuee[s] == 0) valid = false;
                    sum += (adding ? valuee[s] : - valuee[s]);
                    cout << s << " + ";
                    adding = true;
                    s.clear();
                }
                else if(cmd[i] == '-') {
                    if(valuee[s] == 0) valid = false;
                    sum += (adding ? valuee[s] : - valuee[s]);
                    cout << s << " - ";
                    adding = false;
                    s.clear();
                    
                }
                else if(cmd[i] == '=') {
                    if(valuee[s] == 0) valid = false;
                    sum += (adding ? valuee[s] : - valuee[s]);
                    cout << s << " = ";
                    if(!valid) cout << "unknown" << endl;
                    else cout << (valid ? value[sum] : "unknown") << endl;
                    // cout << sum << endl;
                    // cout << value[sum] << endl;
                    // s.clear();
                    // adding = true;
                    // valid = true;
                }
            }
        }
    }

    return 0;
}