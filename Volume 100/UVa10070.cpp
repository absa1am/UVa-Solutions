/*
* Problem: 10070 - Leap Year or Not Leap Year and ...
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char year[1000];
    int cnt, mod4, mod15, mod55, mod100, mod400;

    cnt = 0;
    while(cin >> year) {
        int n, track = 0;
        if(cnt > 0) cout << "\n";
        mod4 = mod15 = mod55 = mod100 = mod400 = 0;
        for(int i = 0; year[i]; i++) {
            n = (year[i] - '0');
            mod4 = (mod4 * 10 + n) % 4;
            mod15 = (mod15 * 10 + n) % 15;
            mod55 = (mod55 * 10 + n) % 55;
            mod100 = (mod100 * 10 + n) % 100;
            mod400 = (mod400 * 10 + n) % 400;
        }
        if((!mod4 && mod100) || !mod400) {
            cout << "This is leap year.\n";
            track = 1;
        }
        if(!mod15) {
            cout << "This is huluculu festival year.\n";
            track = 1;
        }
        if(((!mod4 && mod100) || !mod400) && !mod55) {
            cout << "This is bulukulu festival year.\n";
            track = 1;
        }
        if(!track) cout << "This is an ordinary year.\n";
        cnt++;
    }
    return 0;
}
