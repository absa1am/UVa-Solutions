/*
* Problem: 11577 - Letter Frequency
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    int T, m, rec[207];

    scanf("%d\n", &T);

    while(T--) {
        getline(cin, a);

        for(char c = 'a'; c <= 'z'; c++)
            rec[c] = 0;

        m = 0;
        b = "";
        for(int i = 0; i < a.size(); i++) {
            if(isalpha(a[i])) {
                a[i] = tolower(a[i]);
                rec[a[i]]++;
                m = (m < rec[a[i]])? rec[a[i]]:m;
            }
        }

        for(char c = 'a'; c <= 'z'; c++)
            if(rec[c] == m) b += c;

        cout << b << "\n";
    }

    return 0;
}
