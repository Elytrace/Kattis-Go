#include <bits/stdc++.h>
using namespace std;

void experiment() {
    priority_queue<string, vector<string>, greater<string>> pq;

    int n;
    cin >> n;
    while (n--) {
        char buffer[11];
        cin >> buffer;
        pq.push(string(buffer));
    }

    string _old = pq.top(); pq.pop();
    while (pq.size() > 0) {
        string _new = pq.top(); pq.pop();
        if (!strncmp(_new.c_str(), _old.c_str(), strlen(_old.c_str()))) {
            cout << "No" << endl;
            return;
        }
        else _old = _new;
    }
    cout << "Yes" << endl;
}

int main() {
    int n;
    cin >> n;
    while (n--) experiment();
    return 0;
}