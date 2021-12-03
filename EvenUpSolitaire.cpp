#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<int> deck;
    int card;
    for(int i = 0; i < n; i++) {
        cin >> card;
        if(!deck.empty() and (deck.top() + card) % 2 == 0)
            deck.pop();
        else deck.push(card);
    }
    cout << (int)deck.size() << endl;

    return 0;
}