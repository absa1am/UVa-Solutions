/*
* Problem: 11309 - Counting Chaos
*/

#include <bits/stdc++.h>
using namespace std;

bool isPal(int n) {
    string s;

    s = "";
    while(n) {
        s += n % 10;
        n /= 10;
    }

    for(int i = 0, j = s.length() - 1; i < j; i++, j--)
        if(s[i] != s[j]) return false;

    return true;
}

int main()
{
    int T, h, m, x;

    cin >> T;
    while(T--) {
        scanf("%d:%d", &h, &m);

        x = ((((((h / 10) * 10) + (h % 10)) * 10) + (m / 10)) * 10) + (m % 10);

        while(true) {
            x++;
            if(x % 100 == 60) x += 40;
            if(x == 2400) x = 0;

            if(isPal(x)) break;
        }

        cout << (x / 1000) << (x / 100) % 10 << ":" << (x / 10) % 10 << (x % 10) << "\n";
    }

    return 0;
}
