#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> path(ll x) {
    vector<ll> v;
    v.push_back(x);

    while(x != 1) {
        if(x % 2 == 0)
            x /= 2;
        else 
            x = 3 * x + 1;
        v.push_back(x);
    }
    return v;
}

int find(int x, vector<ll> v) {
    for(int i = 0; i < v.size(); i++)
        if(v[i] == x) return i;
    return -1;
}

int main() {
    ll a, b;
    vector<ll> path_A;
    vector<ll> path_B;
    while(cin >> a >> b and a != 0 and b != 0) {
        path_A = path(a);
        path_B = path(b);

        for(int i = 0; i < path_A.size(); i++) {
            int index = find(path_A[i], path_B);
            if(index != -1) {
                cout << a << " needs " << i << " steps, " 
                     << b << " needs " << index << " steps, they meet at "
                     << path_A[i] << endl;
                break;
            }
        }
    }

    return 0;
}