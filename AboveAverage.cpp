#include <bits/stdc++.h>
using namespace std;

int main() {
    int c;
    cin >> c;
    while(c--) {
        int n;
        cin >> n;
        double* arr = new double[n];
        double average = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i]; 
            average += arr[i];
        }
        average /= n;
        double above = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] > average) above++;
        }
        double ans = above / n * 100;
        printf("%.3f%s \n", (double)above / n * 100, "%");
    }
}