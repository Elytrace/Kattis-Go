#include <bits/stdc++.h>
using namespace std;

vector<int> calc(int r, int b) {
    vector<int> ans;
    // x^2 - r.x + b = 0
    int delta = sqrt(r * r - 4 * b);
    int x1 = (r + delta) / 2;
    ans.push_back(x1);
    x1 = (r - delta) / 2;
    ans.push_back(x1);
    return ans;
}

int main() {
    int r, b;
    cin >> r >> b;

    r = (r-4)/2;

    int w, h;
    w = calc(r, b)[0];
    h = calc(r, b)[1];
    cout << w+2 << " " << h+2 << endl;

    return 0;
}