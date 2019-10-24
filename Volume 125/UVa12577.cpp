/*
* Problem: 12577 - Hajj-e-Akbar
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s;

    i = 0;
    while(cin >> s) {
        if(s.compare("*") == 0) break;
        if(s.compare("Hajj") == 0) cout << "Case " << ++i << ": Hajj-e-Akbar\n";
        else cout << "Case " << ++i << ": Hajj-e-Asghar\n";
    }

    return 0;
}
