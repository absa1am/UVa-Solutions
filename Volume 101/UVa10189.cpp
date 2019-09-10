/*
* Problem: 10189 - Minesweeper
*/

#include <bits/stdc++.h>
#define MAX 107
using namespace std;

int main()
{
    char str[MAX];
    char field[MAX][MAX];
    int n, m, cnt = 0;

    while(cin >> n >> m) {
        cnt++;
        if(!n && !m) return 0;

        for(int i = 0; i < n; i++) {
            cin >> str;
            for(int j = 0; j < m; j++)
                field[i][j] = str[j];
        }

        if(cnt > 1) cout << "\n";
        cout << "Field #" << cnt << ":\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(field[i][j] == '*') cout << "*";
                else {
                    int r1, r2, c1, c2, count;

                    count = 0;
                    r1 = (i - 1 >= 0)? (i - 1):i;
                    r2 = (i + 1 <= n - 1)? (i + 1):i;
                    c1 = (j - 1 >= 0)? (j - 1):j;
                    c2 = (j + 1 <= m - 1)? (j + 1):j;

                    for(int p = r1; p <= r2; p++) {
                        for(int q = c1; q <= c2; q++) {
                            if(field[p][q] == '*') count++;
                        }
                    }
                    cout << count;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
