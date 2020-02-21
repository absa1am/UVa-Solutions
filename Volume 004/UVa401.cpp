/*
* Problem: 401 - Palindromes
*/

#include <bits/stdc++.h>
using namespace std;

bool isRegular(string s)
{
    int i = 0;
    int j = s.size() - 1;

    while(i < j) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

bool isMirrored(string s)
{
    return false;
}

int main()
{

    cout << isRegular("madbm") << "\n";
    cout << isRegular("m") << "\n";

    return 0;
}
