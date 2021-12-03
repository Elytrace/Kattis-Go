#include<bits/stdc++.h>
using namespace std;

int main() {  
    char ch[9][9];  
    int x[8];  
    int y[8];  
    while (cin >> ch[0]) {  
        for (int i = 1; i < 8; i++)
            cin >> ch[i];  
        int c = 0;  
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)  
                if (ch[i][j] == '*') {  
                    x[c] = i;  
                    y[c] = j;  
                    c++;  
                }
        bool flag = 0;  
        // if (c != 8) flag = 1; 
        // if (c == 8)  
        for (int i = 0; i < 8; i++) {  
            for (int j = i + 1; j < 8; j++)  
                if (x[i] == x[j] || y[i] == y[j] || fabs(x[i] - x[j]) == fabs(y[i] - y[j]))
                    flag = 1;  
            if (flag) break;  
        }  
        
        cout << (flag ? "invalid" : "valid") << endl; 
    }  
    return 0;  
}  