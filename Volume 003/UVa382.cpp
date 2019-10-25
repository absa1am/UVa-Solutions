/*
* Problem: 382 - Perfection
*/

#include <bits/stdc++.h>
using namespace std;

vector<int>divs(60007);

void sum(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j += i)
            divs[j] += i;
    }
}

int main()
{
    int n;

    sum(60005);
    cout << "PERFECTION OUTPUT\n";

    while(cin >> n) {
        if(n == 0) break;
        if((divs[n] - n) == n) printf("%5d  PERFECT\n", n);
        else if((divs[n] - n) < n) printf("%5d  DEFICIENT\n", n);
        else printf("%5d  ABUNDANT\n", n);

    }

    cout << "END OF OUTPUT\n";

    return 0;
}
