#include <bits/stdc++.h>
using namespace std;

#define ll long long

string Case(ll k, vector<ll> vec) {
    if(k == 1) {
        for(ll i = 0; i < vec.size()-1; i++) {
            if(find(vec.begin(), vec.end(), 7777-vec[i]) != vec.end()) {
                return "Yes";
            }
        }
        return "No";
    }
    else if(k == 2) {
        sort(vec.begin(), vec.end());
        for(ll i = 1; i < vec.size(); i++)
            if(vec[i-1] == vec[i]) return "Contains duplicate";
        return "Unique";
    }
    else if(k == 3) {
        map<ll, ll> occur;
        for(ll i : vec)
            occur[i]++;
        for(ll i : vec)
            if(occur[i] > vec.size() / 2) return to_string(i);
        return "-1";
    }
    else if(k == 4) {
        vector<ll> ans;
        sort(vec.begin(), vec.end());
        if(vec.size() % 2 == 0) {
            ans.push_back(vec[vec.size()/2 - 1]);
            ans.push_back(vec[vec.size()/2]);
            string answer = to_string(ans[0]) + " " + to_string(ans[1]);
            return answer;
        }
        else {
            ans.push_back(vec[(vec.size()-1)/2]);
            return to_string(ans[0]);
        }
    }
    else {
        vector<ll> digit3;
        for(ll i : vec) 
            if(100 <= i and i <= 999) digit3.push_back(i);
        sort(digit3.begin(), digit3.end());
        string ans = "";
        for(ll i : digit3) ans += to_string(i) + ' ';
        return ans;
    }
}

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> vec;
    ll x;
    for(ll i = 0; i < n; i++) {
        cin >> x;
        vec.push_back(x);
    }
    cout << Case(k, vec) << endl;

    return 0;
}