/*
* Problem: 11636 - Hello World
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;

    while(cin >> n) {
        int x, paste;

        if(n < 0) return 0;
        
        x = 1;
        paste = 0;
        while(x < n) {
            x = x << 1;
            paste++;
        }
        cout << "Case " << ++cnt << ": " << paste << "\n";
    }
    return 0;
}