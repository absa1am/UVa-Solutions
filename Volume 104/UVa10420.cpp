/*
* Problem: 10420 - List of Conquests
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    map<string, int>info;

    cin >> T;
    while(T--) {
        string country, name;

        cin >> country;
        getline(cin, name);
        
        info[country]++;
    }

    for(map<string, int>::iterator i = info.begin(); i != info.end(); i++)
        cout << i->first << " " << i->second << "\n";

    return 0;
}
