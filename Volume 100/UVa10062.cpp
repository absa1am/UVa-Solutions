/*
* Problem: 10062 - Tell me the frequencies!
*/

#include <bits/stdc++.h>
using namespace std;

struct Map {
    int k = 0;
    int v = 0;
};

bool cmp(Map a, Map b)
{
    if(a.v == b.v) return a.k > b.k;
    return a.v < b.v;
}

int main()
{
    int x;
    string s;

    x = 1;
    while(getline(cin, s)) {
        Map m[130];

        for(int i = 0; s[i]; i++) {
            m[s[i]].k = s[i];
            m[s[i]].v++;
        }

        sort(m, m + 128, cmp);

        if(x > 1) cout << "\n";
        for(int i = 32; i <= 128; i++) {
            if(m[i].k)
                cout << m[i].k << " " << m[i].v << "\n";
        }
        x++;
    }

    return 0;
}
