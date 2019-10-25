/*
* Problem: 10945 - Mother bear
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while(getline(cin, s)) {
        bool b;
        string x;

        if(s.compare("DONE") == 0) break;

        x = "";
        for(int i = 0; i < s.length(); i++)
            if(isalpha(s[i])) x += tolower(s[i]);

        b = true;
        for(int i = 0, j = x.length() - 1; i < j; i++, j--) {
            if(x[i] != x[j]) {
                b = false;
                break;
            }
        }

        if(b) cout << "You won't be eaten!\n";
        else cout << "Uh oh..\n";
    }

    return 0;
}
