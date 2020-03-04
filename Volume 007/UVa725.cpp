/*
* Problem: 725 - Division
*/

#include <iostream>
using namespace std;

bool ok(int a, int b) {
    int flag[17] = {0};

    if(a < 10000) flag[0]++;

    while(a) {
        flag[a % 10]++;
        a /= 10;
    }

    while(b) {
        flag[b % 10]++;
        b /= 10;
    }

    for(int i = 0; i < 10; i++)
        if(!flag[i] || flag[i] != 1) return false;

    return true;
}

int main()
{
    int n, blank;

    blank = 1;
    while(cin >> n) {
        bool b = true;

        if(!n) break;
        if(blank > 1) cout << "\n";

        for(int i = 1234; i <= 98765; i++) {
            int x = i * n;

            if(ok(i, x)) {
                b = false;
                cout << x << " / " << (i < 10000? "0":"") << i << " = " << n << "\n";
            }
        }

        if(b) cout << "There are no solutions for " << n << ".\n";
        blank++;
    }

    return 0;
}
