
/*
* Problem: 10193 - All You Need Is Love
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int binToDec(string s) {
    int x, dec = 0;

    x = 1;
    for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] == '1') dec += x;
        x *= 2;
    }

    return dec;
}

int main()
{
    int T;

    cin >> T;
    for(int i = 0; i < T; i++) {
        string a, b, s;

        cin >> a >> b;

        s = gcd(binToDec(a), binToDec(b)) != 1? "All you need is love!":"Love is not all you need!";
        cout << "Pair #" << (i + 1) << ": " << s << "\n";
    }

    return 0;
}
