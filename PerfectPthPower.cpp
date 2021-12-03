#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll x;
    bool found, neg;
    double b;
    while(cin >> x and x != 0) {
        found = false;
        neg = false;
        if(x < 1) {
            neg = true;
            x = -x;
        }
        ll p = 31; // max of p
        while(!found and p >= 1) {
            // x = b^p -> b = x ^ (1/p)
            b = pow(x, 1.0/p);
            if(b - floor(b) < 0.001 and pow(floor(b), p) == x) {
                if(!neg or p % 2 == 1) {
                    cout << p << endl;
                    found = true;
                }
            }
            else if(ceil(b) - b < 0.001 and pow(ceil(b), p) == x) {
                if(!neg or p % 2 == 1) {
                    cout << p << endl;
                    found = true;
                }
            }
            p--;
        }
    }
    return 0;
}