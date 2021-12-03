#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<bool> isPrime(n+1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    int m = sqrt(n); 
    int cnt = 0;

    for(int i = 2; i <= m; i++)
        if(isPrime[i]) {
            cnt++;
            for(int j = i * 2; j <= n; j += i)
                isPrime[j] = false;
        }

    for(int i = m + 1; i <= n; i++)
        if(isPrime[i]) cnt++;
    
    cout << cnt << endl;

    while(q--) {
        int x;
        cin >> x;
        cout << isPrime[x] << endl;
    }

    return 0;
}