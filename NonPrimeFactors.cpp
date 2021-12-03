#include <bits/stdc++.h>
using namespace std;

const int MAX = 2e6 + 1;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    vector<int> origin(MAX, 0);
    origin[0] = 0, origin[1] = 1;

    for(int i = 2; i <= MAX; i++) {
        if(origin[i] > 0) continue;
        for(int j = i; j < MAX; j += i)
                origin[j] = i;
    }

    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        
        int last_pf = 0;
        int curr_pf = 0;
        int cnt = 0;
        int ans = 1;
        while(n > 1) {
            if(origin[n] == last_pf) cnt++;
            else {
                ans *= (cnt + 1);
                last_pf = origin[n];
                curr_pf++;
                cnt = 1;
            }
            n /= origin[n];
        }
        ans *= (cnt + 1);
        cout << ans - curr_pf << endl;
    }

    return 0;
}