/*
* Problem: 299 - Train swapping
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cnt;
    int carriages[51];

    cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> carriages[i];

        cnt = 0;
        for(int j = 0; j < n; j++) {
            int i = j - 1;
            int k = carriages[j];
            while(i >= 0 && carriages[i] > k) {
                carriages[i + 1] = carriages[i];
                cnt++;
                i--;
            }
            carriages[i + 1] = k;
        }
        cout << "Optimal train swapping takes " << cnt << " swaps.\n";
    }

    return 0;
}
