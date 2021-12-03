#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll case1345(ll t, ll* A, ll n) {
    if(t == 1) return 7;
    else if(t == 3) {
        ll min = A[0], max = A[0];
        for(ll i = 1; i < 3; i++) {
            if(min > A[i]) min = A[i];
            if(max < A[i]) max = A[i];
        } 
        return A[0] + A[1] + A[2] - min - max;
    }
    else if(t == 4) {
        ll sum = 0;
        for(ll i = 0; i < n; i++)
            sum += A[i];
        return sum;
    }
    else {
        ll sum = 0;
        for(ll i = 0; i < n; i++)
            if(A[i] % 2 == 0) sum += A[i];
        return sum;
    }
}
string case267(ll t, ll* A, ll n) {
    if(t == 2) {
        if(A[0] > A[1]) return "Bigger";
        else if(A[0] == A[1]) return "Equal";
        else return "Smaller";
    }
    else if(t == 6) {
        string ans = "";
        for(ll i = 0; i < n; i++) {
            A[i] %= 26;
            ans += (A[i] + 'a');
        }
        return ans;
    }
    else {
        ll currentIndex = 0;
        ll step = 0;
        while(0 <= currentIndex and currentIndex <= n-1) {
            if(currentIndex == n-1) return "Done";
            currentIndex = A[currentIndex];
            step++;
            if(step > n) return "Cyclic";
        }
        return "Out";
    }
}

int main() {
    ll n, t;
    cin >> n >> t;
    ll* arr = new ll[n];
    for(ll i = 0; i < n; i++) cin >> arr[i];
    if(t == 1 or t == 3 or t == 4 or t == 5)
        cout << case1345(t, arr, n) << endl;
    else cout << case267(t, arr, n) << endl;

    return 0;
}