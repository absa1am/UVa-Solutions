/*
* Problem: 11541 - Decoding
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[207];
    int T, n, x;

    cin >> T;
    for(int k = 1; k <= T; k++) {
        cin >> s;
        cout << "Case " << k << ": ";
        for(int i = 0; s[i]; ) {
            n = 0;
            x = i - 1;
            while(isdigit(s[i])) {
                n = (n * 10) + (s[i] - '0');
                i++;
            }

            for(int j = 0; j < n - 1; j++)
                cout << s[x];

            if(!n) cout << s[i++];
        }
        cout << "\n";
    }

    return 0;
}
