/*
* Problem: 10298 - Power Strings
*/

#include <bits/stdc++.h>
using namespace std;

int prefixLen(string p) {
    int m = p.size();
    int k, pi[m + 1];

    k = -1;
    pi[0] = -1;
    for(int i = 1; i < m; i++) {
        while(k > -1 && p[k + 1] != p[i])
            k = pi[k];
        if(p[k + 1] == p[i])
            k++;
        pi[i] = k;
    }
    return k;
}

int main()
{
    string s;

    while(cin >> s) {
        int m, p;
        if(s.compare(".") == 0)
            return 0;
        m = s.size();
        p = prefixLen(s);
        if(m % (m - p - 1) == 0)
            cout << m / (m - p - 1) << "\n";
        else cout << 1 << "\n";
    }

    return 0;
}
