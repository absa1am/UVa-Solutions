/*
* Problem: 10107 - What is the median ?
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, arr[10007];

    x = 0;
    while(scanf("%lld", &arr[x]) != EOF) {
        x++;
        sort(arr, arr + x);
        if(x & 1) printf("%lld\n", arr[((x + 1) / 2) - 1]);
        else printf("%lld\n", (arr[(x / 2) - 1] + arr[((x / 2) + 1) - 1]) / 2);
    }
    return 0;
}
