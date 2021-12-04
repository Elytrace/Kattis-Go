#include <bits/stdc++.h>
using namespace std;

int main() {
    list<char> l1, l2;

    char c;
    while(cin.get(c) and c != '\n')
        l1.push_back(c);
    while(cin.get(c) and c != '\n')
        l2.push_back(c);
    
    while(!l1.empty() and !l2.empty() and l1.front() == l2.front()) {
        l1.pop_front(); l2.pop_front();
    }
    while(!l1.empty() and !l2.empty() and l1.back() == l2.back()) {
        l1.pop_back(); l2.pop_back();
    }
    cout << l2.size() << endl;

    return 0;
}