#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    double* num = new double[1000001];
    num[0] = 0;
    for(int i = 1; i < 1000001; i++) 
        num[i] = num[i-1] + log10(i);

    int n;
    while(cin >> n) {
        cout << int(num[n]) + 1 << endl;
    }

    return 0;
}