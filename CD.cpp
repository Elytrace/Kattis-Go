#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
    while (true) {
        unordered_set<int> jack;
        int counter = 0;
        int n, k, next;
        cin >> n >> k;
        if (!n && !k) break;
        while (n--) {
            cin >> next;
            jack.insert(next);
        }
        while (k--) {
            cin >> next;
            if (jack.find(next) != jack.end()) counter++;
        }
        cout << counter << endl;
    }
    return 0;
}