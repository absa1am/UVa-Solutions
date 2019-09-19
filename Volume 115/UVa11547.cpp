/*
* Problem: 11574 - Automatic Answer
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, x;

    cin >> T;
    while(T--) {
        cin >> n;
        x = (((((((n * 567) / 9) + 7492) * 235) / 47) - 498) / 10) % 10;
        cout << ((x < 0)? -x:x) << "\n";
    }

    return 0;
}
