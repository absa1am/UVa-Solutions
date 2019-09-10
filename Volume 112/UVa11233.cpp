/*
* Problem: 11233 - Deli Deli
*/

#include <bits/stdc++.h>
using namespace std;

struct record {
    char a[25];
    char b[25];
};

int main()
{
    int p, q;
    record x[25];

    cin >> p >> q;
    for(int i = 0; i < p; i++)
        cin >> x[i].a >> x[i].b;

    for(int i = 0; i < q; i++) {
        char y[25];
        bool flag = true;

        cin >> y;
        for(int j = 0; j < p; j++) {
            if(!strcmp(y, x[j].a)) {
                cout << x[j].b << "\n";
                flag = false;
                break;
            }
        }

        if(flag) {
            int len = strlen(y) - 1;
            if(y[len] == 'y' && y[len - 1] != 'a' && y[len - 1] != 'e' && y[len - 1] != 'i' && y[len - 1] != 'o' && y[len - 1] != 'u') {
                y[len] = 'i';
                y[len + 1] = 'e';
                y[len + 2] = 's';
                y[len + 3] = '\0';
            }
            else if(y[len] == 'o' || y[len] == 's' || y[len] == 'x' || (y[len - 1] == 'c' && y[len] == 'h') || (y[len - 1] == 's' && y[len] == 'h')) {
                y[len + 1] = 'e';
                y[len + 2] = 's';
                y[len + 3] = '\0';
            }
            else {
                y[len + 1] = 's';
                y[len + 2] = '\0';
            }
            cout << y << "\n";
        }
    }

    return 0;
}
