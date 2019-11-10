/*
* Problem: 11827 - Maximum GCD
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main()
{
    int T;

    cin >> T;
    cin.ignore();

    while(T--) {
        int g;
        string s, x;
        vector<int>n;

        getline(cin, s);

        stringstream _s(s);
        while(_s >> x) { n.push_back(stoi(x)); }

        g = 0;
        for(int i = 0; i < n.size(); i++) {
            for(int j = i + 1; j < n.size(); j++)
                g = max(g, gcd(n[i], n[j]));
        }

        cout << g << "\n";
    }

    return 0;
}