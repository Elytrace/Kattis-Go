#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int y = 2;
    int cnt = 0;
    while(y * y <= x) {
        if(x % y != 0) y++;
        else {
            x /= y;
            cnt++;
        }
    }
    cout << cnt+1 << endl;

    return 0;
}