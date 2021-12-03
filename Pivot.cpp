#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> pivots;
    int MIN = -2147483648;
    for (int i = 0; i < n; i++) {
        int next;
        cin >> next;
        pivots.erase(pivots.upper_bound(next), pivots.end());
        if (next > MIN) {
            MIN = next;
            pivots.insert(next);
        }
    }
    cout << pivots.size();
    return 0;
}