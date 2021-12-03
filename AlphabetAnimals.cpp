#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(0);

    string s;
    int n;
    cin >> s >> n;
    string arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    char last = s[s.size()-1];
    int* count = new int['z' + 1]{0};
    vector<string> list;

    for(int i = 0; i < n; i++) {
        string animal = arr[i];
        count[animal[0]]++;
        if(animal[0] == last) list.push_back(animal);
    }

    if(list.empty()) {
        cout << "?" << endl;
    }
    else {
        bool found = false;
        for(string animal : list) {
            int n = animal.size()-1;
            if(!count[animal[n]] or animal[0] == animal[n] and count[animal[0]] == 1) {
                cout << animal << "!" << endl;
                found = true;
            }
            if(found) break;
        }
        if(!found) cout << list[0] << endl;
    }

    return 0;
}