#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int index = 0;
    while (index < n) {
        int start = arr[index];
        while(index + 1 < n && arr[index] == arr[index + 1] - 1) index++;
        int end = arr[index];
        if (start == end) cout << start << (index == n - 1 ? "\n" : " ");
        else if (start == end - 1) cout << start << " " << end << (index == n - 1 ? "\n" : " ");
        else cout << start << "-" << end << (index == n - 1 ? "\n" : " ");
        index++;
    }
    return 0;
}