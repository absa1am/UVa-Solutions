/*
* Problem: 401 - Palindromes
*/

#include <iostream>
#include <map>
using namespace std;

map<char, char>m{
                    {'A', 'A'},
                    {'E', '3'},
                    {'H', 'H'},
                    {'I', 'I'},
                    {'J', 'L'},
                    {'L', 'J'},
                    {'M', 'M'},
                    {'O', 'O'},
                    {'S', '2'},
                    {'T', 'T'},
                    {'U', 'U'},
                    {'V', 'V'},
                    {'W', 'W'},
                    {'X', 'X'},
                    {'Y', 'Y'},
                    {'Z', '5'},
                    {'1', '1'},
                    {'2', 'S'},
                    {'3', 'E'},
                    {'5', 'Z'},
                    {'8', '8'}
                };

bool isRegular(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while(i < j) {
        if(s[i] != s[j]) return false;
        i++, j--;
    }

    return true;
}

bool isMirrored(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while(i < j) {
        if(s[i] != m[s[j]]) return false;
        i++, j--;
    }

    if(s.size() % 2 && m[s[s.size() / 2]] != s[s.size() / 2]) return false;

    return true;
}

int main()
{
    string s;

    while(cin >> s) {
        if(isRegular(s) && isMirrored(s)) cout << s << " -- is a mirrored palindrome.\n";
        else if(isRegular(s)) cout << s << " -- is a regular palindrome.\n";
        else if(isMirrored(s)) cout << s << " -- is a mirrored string.\n";
        else cout << s << " -- is not a palindrome.\n";
        cout << "\n";
    }

    return 0;
}
