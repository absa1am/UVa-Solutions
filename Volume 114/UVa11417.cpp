/*
* 11417 - GCD
*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

int main()
{
    int n;

    while(cin >> n) {
        int sum = 0;

        if(!n) break;
        
        for(int i = 1; i < n; i++) {
            for(int j = i + 1; j <= n; j++)
                sum += gcd(i, j);
        }
        cout << sum << "\n";
    }

    return 0;
}
