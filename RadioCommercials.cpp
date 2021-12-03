#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n, p;
    cin >> n >> p;
    int *a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i]; a[i] -= p;
    }

    int maxSum = 0;
    int Max = 0;
    for(int i = 1; i < n; i++) {
        Max = max(a[i], Max + a[i]);
        maxSum = max(maxSum, Max);
    }
    cout << maxSum << endl;


    return 0;
}
