#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll c;
    int n;
    cin >> c >> n;
    ll train = 0;
    ll l, e, s;
    bool stt = true;
    while(n--) {
        cin >> l >> e >> s;
        if(l > train) 
            stt = false;
        train-= l;
        if(train + e > c) 
            stt = false;
        train += e;
        if(s != 0 and train != c)
            stt = false;
    }
    if(e != 0 or s != 0 or train != 0) 
        stt = false;
    cout << (stt ? "possible" : "impossible") << endl;

    return 0;
}