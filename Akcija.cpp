#include <bits/stdc++.h>
using namespace std;

int main() {
    int size, next;
    cin >> size;

    priority_queue<int> queue;
    while (size--)
    {
        cin >> next;
        queue.push(next);
    }

    int skip = 0, sum = 0;
    while (!queue.empty())
    {
        if (skip != 2) sum += queue.top();
        queue.pop();
        skip = skip == 2 ? 0 : skip + 1;
    }
    cout << sum << endl;
    return 0;
}