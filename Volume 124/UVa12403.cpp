/*
* Problem: 12403 - Save Satu
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cmd;
    int T, amount = 0;

    cin >> T;
    while(T--) {
        cin >> cmd;
        if(cmd.compare("donate") == 0) {
            int x;
            cin >> x;
            amount += x;
        } else {
            cout << amount << "\n";
        }
    }

    return 0;
}
