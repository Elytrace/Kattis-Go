#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<char> s;

    char c;
    while (cin >> c && c != '\n') {
        if (c == '<') s.pop();
        else s.push(c);
    }
    if (s.size() > 0) {
        char* buffer = new char[s.size() + 1];
        buffer[s.size()] = '\0';
        while (!s.empty())
        {
            buffer[s.size() - 1] = s.top();
            s.pop();
        }
        cout << buffer << endl;
    }
    return 0;
}