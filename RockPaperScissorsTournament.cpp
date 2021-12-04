#include <bits/stdc++.h>
using namespace std;

string evaluate(string m1, string m2) {
    if(m1[0] == 'r' and m2[0] == 'p') return "p2 wins";
    else if(m1[0] == 'r' and m2[0] == 's') return "p1 wins";
    else if(m1[0] == 'r' and m2[0] == 'r') return "draw";
    else if(m1[0] == 'p' and m2[0] == 'p') return "draw";
    else if(m1[0] == 'p' and m2[0] == 's') return "p2 wins";
    else if(m1[0] == 'p' and m2[0] == 'r') return "p1 wins";
    else if(m1[0] == 's' and m2[0] == 'p') return "p1 wins";
    else if(m1[0] == 's' and m2[0] == 's') return "draw";
    else return "p2 wins";
    
}

int main() {
    int n, k;
    while(cin >> n >> k and n != 0) {
        pair<int, int> *win_lose = new pair<int, int>[n];
        
        int p1, p2;
        string m1, m2;
        for(int i = 0; i < k * n * (n-1) / 2; i++) {
            cin >> p1 >> m1 >> p2 >> m2;
            if(evaluate(m1, m2) == "p1 wins") {
                win_lose[p1-1].first++;
                win_lose[p2-1].second++;
            }
            else if(evaluate(m1, m2) == "p2 wins") {
                win_lose[p1-1].second++;
                win_lose[p2-1].first++;
            }
        }
        for(int i = 0; i < n; i++) {
            if(win_lose[i].first == 0 and win_lose[i].second == 0) 
                cout << "-" << endl;
            else {
                double score = (double)win_lose[i].first / (double)(win_lose[i].first + win_lose[i].second);
                cout << fixed << setprecision(3) << score << endl;
            }
        }
        cout << endl;
    }

    return 0;
}