/*
* Problem: 12289 - One-Two-Three
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    cin >> T;
    while(T--) {
        string word;

        cin >> word;
        if(word.length() > 3) cout << "3\n";
        else if(word[0] == 't' || word[1] == 'w') cout << "2\n";
        else cout << "1\n";
    }

    return 0;
}
