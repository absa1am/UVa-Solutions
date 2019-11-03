/*
* Problem: 673 - Parentheses Balance
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    cin >> T;
    cin.ignore();

    while(T--) {
        string s;
        stack<char>p;

        getline(cin, s);
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[') p.push(s[i]);
            else if(s[i] == ')' && !p.empty() && p.top() == '(') p.pop();
            else if(s[i] == ']' && !p.empty() && p.top() == '[') p.pop();
            else p.push(s[i]);
        }

        if(p.empty()) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}
