#include <bits/stdc++.h>
using namespace std;

int main(){

    string line;
    getline(cin, line);
    int nCases = stoi(line);
    nextJourney:
    while(nCases--){
        stack<char> backpack;
        getline(cin, line);
        stringstream ss(line);
        bool good = true;
        char c;
        while(ss >> c){
            switch(c){
                case '$':
                    backpack.push('$');
                    break;
                case '|':
                    backpack.push('|');
                    break;
                case '*':
                    backpack.push('*');
                    break;
                case 't':
                    if(backpack.size() == 0  || backpack.top() != '|'){
                        good = false;
                    } else {
                        backpack.pop();
                    }
                    break;
                case 'j':
                    if(backpack.size() == 0  || backpack.top() != '*'){
                        good = false;
                    } else {
                        backpack.pop();
                    }
                    break;
                case 'b': 
                    if(backpack.size() == 0  || backpack.top() != '$'){
                        good = false;
                    } else {
                        backpack.pop();
                    }
                    break;
                default:
                    break;
            }
            if(!good){
                break;
            }

        }
        if(!good || backpack.size() != 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;   
}