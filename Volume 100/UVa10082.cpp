/*
* Problem: 10082 - WERTYU
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[1007];
    char keypad[] = "1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    while(fgets(str, 1007, stdin)) {
        for(int i = 0; keypad[i]; i++) {
            for(int j = 0; str[j]; j++)
                if(keypad[i] == str[j]) str[j] = keypad[i - 1];
        }
        cout << str;
    }

    return 0;
}
