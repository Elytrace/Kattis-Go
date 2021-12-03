#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll sum = 0, candies;
        for(int i = 0; i < n; i++) {
            cin >> candies;
            sum += candies % n;
        }
        cout << (sum % n == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}