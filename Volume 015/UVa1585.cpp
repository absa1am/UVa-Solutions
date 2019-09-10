/*
* Problem: 1585 - Score
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[85];
    int score, T;

    cin >> T;

    while(T--) {
        cin >> str;

        score = 0;
        for(int i = 0; str[i]; ) {
            int x = 1;

            if(str[i] != 'O') i++;
            while(str[i] == 'O') {
                score += x++;
                i++;
            }
        }
        cout << score << "\n";
    }

    return 0;
}
