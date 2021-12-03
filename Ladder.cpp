#include <bits/stdc++.h>
using namespace std;

int main() {
    double h, v;
    cin >> h >> v;
    cout << ceil(h / sin(v * 0.0174532925)) << endl; 

    return 0;
}