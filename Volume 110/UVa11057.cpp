/*
* Problem: 11057 - Exact Sum
*/

#include <iostream>
#include <algorithm>
using namespace std;

int bsearch(int c[], int l, int r, int t)
{
    while(l <= r) {
        int m = l + (r - l) / 2;

        if(t == c[m]) return c[m];
        else if(t < c[m]) r = m - 1;
        else l = m + 1;
    }

    return 0;
}

int main()
{
    int n;

    while(cin >> n) {
        int a, b, m, c[n + 1];

        for(int i = 0; i < n; i++)
            cin >> c[i];

        cin >> m;
        sort(c, c + n);

        for(int i = 0; i < n; i++) {
            int x = bsearch(c, i + 1, n - 1, m - c[i]);
            if(x) {
                a = c[i];
                b = x;
            }
        }

        cout << "Peter should buy books whose prices are " << a << " and " << b << ".\n\n";
    }

    return 0;
}
