/*
* Problem: 1584 - Digit Generator
*/

#include <bits/stdc++.h>
#define MAX 100007
using namespace std;

int gen[MAX];
void digitSum(int n) {
    int x, sum;
    for(int i = 1; i <= n; i++) {
        x = i;
        sum = x;
        while(x > 0) {
            sum += (x % 10);
            x /= 10;
        }
        if(!gen[sum]) gen[sum] = i;
    }
}

int main()
{
    int T, n;

    digitSum(MAX);

    cin >> T;
    while(T--) {
        cin >> n;
        cout << gen[n] << "\n";
    }

    return 0;
}
