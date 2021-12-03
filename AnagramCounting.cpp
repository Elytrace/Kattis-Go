#include <bits/stdc++.h>
using namespace std;

void multiply(int x, vector<int> &result) {
    int value = 0;

    for(int i = 0; i < result.size(); i++) {
        int prod = result[i] * x + value;
        result[i] = prod % 10;
        value = prod / 10;
    }
    while(value) {
        result.push_back(value % 10);
        value /= 10;
    }
}

string factorial(int n) {
    vector<int> result;
    result.push_back(1);

    for(int i = 2; i <= n; i++) multiply(i, result);

    reverse(result.begin(), result.end());

    string ans = "";
    for(auto i : result) ans += i + '0';
    return ans;
}

int main() {
    string s;
    map<char, int> occur;
    while(cin >> s) {
        for(char c : s) {
            occur[c]++;
        }
        int cnt = 0;
        for(int i = 'a'; i <= 'z'; i++) {
            if(occur[i]) cnt++;
        }
        

    }

    return 0;
}