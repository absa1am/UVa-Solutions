/*
* Problem: 499 - What's The Frequency, Kenneth ?
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while(getline(cin, s)) {
        int u, l;
        int rec[125] = {0};

        u = l = 0;
        for(int i = 0; i < s.length(); i++) {
            if(isupper(s[i])) {
                rec[s[i]]++;
                if(u < rec[s[i]]) u = rec[s[i]];
            }
            if(islower(s[i])) {
                rec[s[i]]++;
                if(l < rec[s[i]]) l = rec[s[i]];
            }
        }

        if(u > l) {
            for(char i = 'A'; i <= 'Z'; i++)
                if(rec[i] == u) cout << i;
        } else if(l > u) {
            for(char i = 'a'; i <= 'z'; i++)
                if(rec[i] == l) cout << i;
        } else {
            for(char i = 'A'; i <= 'Z'; i++)
                if(rec[i] == u) cout << i;

            for(char i = 'a'; i <= 'z'; i++)
                if(rec[i] == l) cout << i;
        }
        cout << " " << max(u, l) << "\n";
    }

    return 0;
}
