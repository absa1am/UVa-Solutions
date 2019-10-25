/*
* Problem: 11221 - Magic square palindromes.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    string s;

    cin >> T;
    cin.ignore();
    // scanf("%d\n", &T);

    for(int i = 1; i <= T; i++) {
        bool b;
        string x;

        getline(cin, s);

        x = "";
        for(int j = 0; j < s.length(); j++)
            if(isalpha(s[j])) x += s[j];

        b = true;
        for(int j = 0, k = x.length() - 1; j < k; j++, k--) {
            if(x[j] != x[k]) {
                b = false;
                break;
            }
        }

        int p = (int) sqrt(x.length());

        if(b && p * p == x.length()) cout << "Case #" << i << ":\n" << p << "\n";
        else cout << "Case #" << i << ":\nNo magic :(\n";
    }

    return 0;
}
