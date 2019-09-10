/*
* Problem: 10041 - Vito's Family
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, x, house[505];

    cin >> T;
    while(T--) {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> house[i];

        sort(house, house + n);

        int sum = 0;
        int median = n / 2;
        for(int i = 0; i < n; i++)
            sum += abs(house[median] - house[i]);

        cout << sum << "\n";
    }
    return 0;
}
