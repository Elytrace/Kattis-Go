#include <bits/stdc++.h>
using namespace std;

int main() {
    int node[] = {8, 12, 7, 14, 6, 11, 5, 15, 4, 10, 3, 13, 2, 9, 1};
    int h;
    string path;
    cin >> h >> path;
    int first = 0;
    int last = 15 - 1;
    int mid = (last + first) / 2;
    for(char c : path) {
        if(c == 'L') 
            last = mid-1;
        else 
            first = mid+1;
        // cout << node[mid] << endl;
        mid = (last + first) / 2;
    }
    cout << node[mid] << endl;

    return 0;
}