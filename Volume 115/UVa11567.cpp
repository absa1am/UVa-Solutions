/*
* Problem: 11567 - Moliu Number Generator
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s, x;

    while(cin >> s) {
        x = 0;
        while(s > 0) {
            if(s % 2 == 0) {
                s /= 2;
                x++;
            } else {
                if((s + 1) % 4 == 0) s++;
                else s--;
                x++;
            }
        }
        cout << x << "\n";
    }

    return 0;
}
