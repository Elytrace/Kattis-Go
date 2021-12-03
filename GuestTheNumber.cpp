#include <bits/stdc++.h>
using namespace std;

int main() {
    int first = 1;
    int last = 1000;
    int guest;
    string ans;
    while(ans != "correct") {
        guest = (first + last) / 2;
        cout << guest << endl;
        cin >> ans;
        if(ans == "lower") 
            last = guest - 1;
        else if(ans == "higher")
            first = guest + 1;
    }

    return 0;
}