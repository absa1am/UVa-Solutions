/*
* Problem: 11727 - Cost Cutting
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    cin >> T;
    for(int i = 1; i <= T; i++) {
        int a, b, c, mid;

        cin >> a >> b >> c;
        if(a > b && a < c) mid = a;
        else if(b > a && b < c) mid = b;
        else if(a > c && a < b) mid = a;
        else if(b > c && b < a) mid = b;
        else mid = c;

        cout << "Case " << i << ": " << mid << "\n";
    }

    return 0;
}
