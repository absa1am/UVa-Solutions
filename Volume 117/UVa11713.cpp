/*
Problem: 11713 - Abstract Names
*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main()
{
    int t;

    cin >> t;

    while(t--) {
        string a, b;

        cin >> a >> b;

        if(a.size() != b.size()) cout << "No\n";
        else {
            int i;

            for(i = 0; i < a.size(); i++) {
                if(!isVowel(a[i]) && a[i] != b[i]) break;
                if(isVowel(a[i]) && !isVowel(b[i])) break;
            }

            if(i < a.size()) cout << "No\n";
            else cout << "Yes\n";
        }
    }

    return 0;
}
