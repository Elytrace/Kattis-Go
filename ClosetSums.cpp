#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int cnt = 1;
    while(cin >> n) {
        cout << "Case " << cnt++ << ": " << endl; 
        int* arr = new int[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        int m;
        cin >> m;
        while(m--) {
            int target;
            cin >> target;
            int closet = arr[0] + arr[1];

            for(int i = 0; i < n-1; i++) 
                for(int j = i+1; j < n; j++) {
                    int sum = arr[i] + arr[j];
                    if(abs(sum - target) < abs(closet - target)) {
                        closet = sum;
                    }
                }
            
            cout << "Closest sum to " << target << " is " << closet << "." << endl;
        }
    }

    return 0;
}