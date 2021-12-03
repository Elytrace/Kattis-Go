#include <bits/stdc++.h>
using namespace std;

int days(int seeds) {
    priority_queue<int> queue;
    int next, input_max = 0;
    for (int i = 0; i < seeds; i++) {
        cin >> next;
        /* if (next < input_max - seeds) continue; */
        /* if (next > input_max) input_max = next; */
        queue.push(next);
    }
    int day = 1, max_days = 0;
    while (!queue.empty()) {
        max_days = max(queue.top() + day++, max_days);
        queue.pop();
    }
    return max_days + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << days(n) << endl;
    return 0;
}