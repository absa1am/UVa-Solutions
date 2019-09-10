/*
* Problem: 455 - Periodic Strings
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    char str[85];

    cin >> T;
    while(T--) {
        char a[85], b[85];

        cin >> str;
        for(int i = 0; str[i]; i++) {
            b[0] = '\0';
            a[i] = str[i];
            a[i + 1] = '\0';

            for(int j = 1; j <= (strlen(str) / strlen(a)); j++)
                strcat(b, a);
                
            if(strcmp(str, b) == 0) {
                cout << strlen(a) << "\n";
                break;
            }
        }
        if(T > 0) cout << "\n";
    }

    return 0;
}
