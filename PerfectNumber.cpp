#include <bits/stdc++.h>
using namespace std;

int cnt(int n) {
    int cnt = 1;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) {
            cnt += i;
            cnt += (n / i == i) ? 0 : n / i;
        }
    return cnt;
}

int main() {
    int n;
    while(cin >> n) {
        if(cnt(n) == n) cout << n << " perfect" << endl;
        else if(abs(cnt(n) - n) <= 2) cout << n << " almost perfect" << endl;
        else cout << n << " not perfect" << endl;
    }

    return 0;
}