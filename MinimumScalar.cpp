#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    int Case = 1;
    while(Case <= t) {
        int n; cin >> n;
        vector<ll> a;
        vector<ll> b;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll sum = 0;
        for(int i = 0; i < n; i++) { 
            sum += a[i] * b[n-i-1];
        }
        cout << "Case #" << Case++ << ": " << sum << endl;
        
    }

    return 0;
}