/*
* Problem: 10116 - Robot Motion
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;

    while(cin >> a >> b >> c) {
        if(!a && !b && !c) return 0;

        int row = 1, col = c;
        char s[a + 7][b + 7];
        int v[a + 7][b + 7];

        for(int i = 1; i <= a; i++) {
            for(int j = 1; j <= b; j++) {
                cin >> s[i][j];
                v[i][j] = 0;
            }
        }

        int t = 0;
        for(int i = 1; i <= a * b + 7; i++) {
            char x = s[row][col];

            t++;
            if(v[row][col]) {
            	if(row == 2 && col == c) cout << "0 step(s) before a loop of "<< t << " step(s)\n";
                else cout << (v[row][col] - 1) << " step(s) before a loop of " << (t - v[row][col]) << " step(s)\n";
                break;
            }

            v[row][col] = t;

            if(x == 'N') {
                row--;
                if(row < 1) {
                    cout << t << " step(s) to exit\n";
                    break;
                }
            }
            else if(x == 'S') {
            	row++;
                if(row > a) {
                    cout << t << " step(s) to exit\n";
                    break;
                }
            }
            else if(x == 'E') {
            	col++;
                if(col > b) {
                    cout << t << " step(s) to exit\n";
                    break;
                }
            }
            else {
            	col--;
                if(col < 1) {
                    cout << t << " step(s) to exit\n";
                    break;
                }
            }
        }

    }

    return 0;
}
