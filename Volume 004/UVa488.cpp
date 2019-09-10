/*
* Problem: 488 - Triangle Wave
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, amplitude, frequency;

    cin >> T;
    while(T--) {
        cin >> amplitude >> frequency;
        for(int i = 1; i <= frequency; i++) {
            int x = 2 * amplitude;
            for(int j = 1; j < x; j++) {
                for(int k = 1; k <= (j > amplitude ? x - j:j); k++)
                    if(j > amplitude) cout << (x - j);
                    else cout << j;
                cout << "\n";
            }
            if(i < frequency) cout << "\n";
        }
        if(T > 0) cout << "\n";
    }
    return 0;
}
