/*
* Problem: 369 - Combinations
*/

#include <bits/stdc++.h>
#define i64 long long
using namespace std;

int main()
{
    i64 n, r;

    while(cin >> n >> r) {
        i64 n1[101], r1[101], nCr;

        if(!n && !r) return 0;

        for(int i = (n - r + 1); i <= n; i++)
            n1[i] = i;

        for(int i = 1; i <= r; i++)
            r1[i] = i;

        for(int i = 1; i <= r; i++) {
            for(int j = (n - r + 1); j <= n; j++) {
                if(n1[j] % r1[i] == 0) {
                    n1[j] = n1[j] / r1[i];
                    r1[i] = 1;
                } else if(r1[i] % n1[j] == 0) {
                    r1[i] = r1[i] / n1[j];
                    n1[j] = 1;
                }
            }
        }

        for(int i = (n - r + 1); i < n; i++)
            n1[n] *= n1[i];

        for(int i = 1; i < r; i++)
            r1[r] *= r1[i];

        nCr = n1[n] / r1[r];
        cout << n << " things taken "<< r << " at a time is " << nCr << " exactly.\n";
    }

    return 0;
}
