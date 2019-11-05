/*
* Problem: 10789 - Prime Frequency
*/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3; i <= n / 2; i += 2)
        if(n % i == 0) return false;
    return true;
}

int main()
{
    int T;

    cin >> T;
    for(int i = 1; i <= T; i++) {
        string s;
        bool b = true;
        int j, flag[125] = {0};

        cin >> s;
        for(j = 0; s[j]; j++)
            flag[s[j]]++;

        printf("Case %d: ", i);
        for(j = 48; j <= 122; j++)
            if(isPrime(flag[j])) {
                printf("%c", j);
                b = false;
            }

        if(b) printf("empty\n");
        else printf("\n");
    }

    return 0;
}
