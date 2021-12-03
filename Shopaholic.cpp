#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;
    ll* arr = new ll[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);

    ll discount = 0;
    for(int i = n-3; i >= 0; i -= 3)
        discount += arr[i];
    
    cout << discount << endl;

    return 0;
}