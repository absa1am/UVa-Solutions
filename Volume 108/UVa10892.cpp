/*
* Problem: 10892 - LCM Cardinality
*/

#include <bits/stdc++.h>
#define i64 long long
using namespace std;

i64 gcd(i64 a, i64 b) {
    if(b == 0) return a;
    else return gcd(b, a % b);
}

vector<i64> divisors(i64 n) {
    vector<i64> v;

    for(i64 i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            v.push_back(i);
            if(i != n / i) v.push_back(n / i);
        }
    }

    return v;
}

int main()
{
    i64 n;

    while(cin >> n) {
        int cnt = 1;
        vector<i64>v;

        if(!n) break;
        v = divisors(n);
        for(int i = 0; i < v.size(); i++) {
            for(int j = i + 1; j < v.size(); j++) {
                if(v[i] * v[j] / gcd(v[i], v[j]) == n) cnt++;
            }
        }

        cout << n << " " << cnt << "\n";
    }

    return 0;
}
