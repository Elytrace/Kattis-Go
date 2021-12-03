#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cin.ignore();
    int** a = new int*[n+2];

    string s;
    a[0] = new int[m+2]{0};
    a[n+1] = new int[m+2]{0};
    for(int i = 1; i < n+1; i++) {
        cin >> s;
        
        a[i] = new int[m+2]{0};
        for(int j = 1; j < m+1; j++) 
            // a[i][j] = 0;
            a[i][j] = s[j-1] - '0';
    }
    for(int i = 0; i < n+2; i++) {
        for(int j = 0; j < m+2; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
    

    return 0;
}