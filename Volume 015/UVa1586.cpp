/*
* Problem: 1586 - Molar Mass
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    double mass;

    scanf("%d", &T);
    while(T--) {
        int x;
        double a, b;
        char atom[200], quantity[100];

        scanf("%s", atom);

        mass = 0.000;
        for(int i = 0; atom[i]; ) {
            if(isalpha(atom[i])) {
                if(atom[i] == 'C') a = 12.010;
                else if(atom[i] == 'H') a = 1.008;
                else if(atom[i] == 'O') a = 16.000;
                else a = 14.010;
                i++;
            }

            quantity[0] = '\0';
            if(isdigit(atom[i])) {
                x = 0;
                while(isdigit(atom[i]) && atom[i]) {
                    quantity[x++] = atom[i];
                    i++;
                }
                // quantity[x] = '\0';
            }

            if(quantity[0] == '\0') b = 1.000;
            else b = atoi(quantity);

            mass += (a * b);
        }
        printf("%0.3lf\n", mass);
    }
    return 0;
}
