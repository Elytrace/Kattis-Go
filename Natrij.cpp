#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2;
    char c;
    cin >> h1 >> c >> m1 >> c >> s1;
    cin >> h2 >> c >> m2 >> c >> s2;
    
    int h3, m3, s3;
    if(s2 >= s1) s3 = s2 - s1;
    else {
        s3 = s2 + 60 - s1;
        m2--;
    }

    if(m2 >= m1) m3 = m2 - m1;
    else {
        m3 = m2 + 60 - m1;
        h2--;
    }

    if(h2 >= h1) h3 = h2 - h1;
    else {
        h3 = h2 + 24 - h1;
    }
    if(h3 + m3 + s3 == 0) h3 += 24;
    
    cout << setfill('0') << setw(2) << h3 << ":" << setw(2) << m3 << ":" << setw(2) << s3 << endl;

    return 0;
}