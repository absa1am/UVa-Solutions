/*
* Problem: 10921 - Find the Telephone
*/

#include <bits/stdc++.h>
using namespace std;

string record[] = {
    "", "", "ABC", // Index 0, 1, 2
    "DEF", "GHI",
    "JKL", "MNO",
    "PQRS", "TUV",
    "WXYZ"
};

int main()
{
    string s;

    while(cin >> s) {
        for(int i = 0; s[i]; i++) {
            for(int j = 2; j < 10; j++) {
                for(int k = 0; record[j][k]; k++) {
                    if(record[j][k] == s[i]) {
                        s[i] = '0' + j;
                        break;
                    }
                }
            }
        }

        cout << s << "\n";
    }

    return 0;
}
