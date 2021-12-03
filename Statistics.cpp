#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int cnt = 1;
    while(cin >> n) {
        int* arr = new int[n];
        cin >> arr[0];
        int max = arr[0], min = arr[0];
        for(int i = 1; i < n; i++) {
            cin >> arr[i];
            if(arr[i] > max) max = arr[i];
            if(arr[i] < min) min = arr[i];
        }
        cout << "Case " << cnt++ << ": ";
        cout << min << " " << max << " " << max - min << endl;
         
    }

    return 0;
}