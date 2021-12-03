#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, p, k;
    cin >> n >> p >> k;
    vector <double> t;
    t.push_back(0);
    for(int i = 0; i < n; i++) {
        double ti; cin >> ti;
        t.push_back(ti);
    }
    t.push_back(k);

    double sum = 0;
    for(int i = 1; i < t.size(); i++) {
        sum += (t[i] - t[i-1]) * (1 + p/100 * (i-1));
    }
    cout << setprecision(6) << std::fixed << sum << endl;
    return 0;
}