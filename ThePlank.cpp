#include <bits/stdc++.h>
using namespace std;

int recur(int n) {
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;
    int *p = new int[n+1];
    p[1] = 1, p[2] = 2, p[3] = 4;
    for(int i = 4; i <= n; i++) {
        p[i] = p[i-1] + p[i-2] + p[i-3];
    }
    return p[n];
}

int main() {
    int n;
    cin >> n;
    cout << recur(n) << endl;

    return 0;
}