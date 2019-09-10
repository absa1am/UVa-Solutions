/*
* Problem: 694 - The Collatz Sequence
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long a, b;

    t = 0;
    while(scanf("%lld %lld", &a, &b) != EOF) {
        long long n, cnt;

        if(a < 0 && b < 0) return 0;

        n = a;
        cnt = 0;
        while(n <= b) {
            cnt++;
            if(n == 1) break;
            else if(n & 1) n = (n + n + n + 1);
            else n = n >> 1;
        }
        printf("Case %d: A = %lld, limit = %lld, number of terms = %lld\n", ++t, a, b, cnt);
    }
    return 0;
}
