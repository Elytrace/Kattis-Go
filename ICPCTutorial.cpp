#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll factorial(ll n) {
    int total = 1;
    for(int i = 1; i <= n; i++) total *= i;
    return total;
}

bool calc(ll m, ll n, int t) {
    if(t == 1) {
        if(n > 13) return false;
        else {
            if(factorial(n) <= m) return true;
            else return false;
        }
    }
    else if(t == 2) {
        if(n > 30) return false;
        else {
            if(pow(2, n) <= m) return true;
            else return false;
        }
    }
    else if(t == 3) {
        if(n > 211) return false;
        else {
            if(pow(n, 4) <= m) return true;
            else return false;
        }
    }
    else if(t == 4) {
        if(n > 1259) return false;
        else {
            if(pow(n, 3) <= m) return true;
            else return false;
        }
    }
    else if(t == 5) {
        if(n > 44721) return false;
        else {
            if(pow(n, 2) <= m) return true;
            else return false;
        }
    }
    else if(t == 6) {
        if(n > 70000000) return false;
        else {
            if(log2(n) * n <= m) return true;
            else return false;
        }
    }
    else {
        if(n > 1500000000) return false;
        else {
            if(n <= m) return true;
            else return false;
        }
    }
}

int main() {

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    ll m, n, t;
    cin >> m >> n >> t;
    
    cout << (calc(m, n, t) ? "AC" : "TLE") << endl;

    return 0;
}