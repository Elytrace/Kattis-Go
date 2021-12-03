#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vector<int> v;
        for (int i = 1; i <= k; i++) v.push_back(i);
        list<int> lst;
        int numberOfShifts = k;
        for (int i = k - 1; i >= 0; i--) {
            lst.push_front(v[i]);
            for (int i = 0; i < numberOfShifts; i++) {
                int tmp = lst.back();
                lst.pop_back();
                lst.push_front(tmp);
            }
            numberOfShifts--;
        }
        int ind = 0;
        for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
            cout << (ind == lst.size() - 1 ? (*it + "\n") : (*it + " "));
            ind++;
        }
    }
    return 0;
}