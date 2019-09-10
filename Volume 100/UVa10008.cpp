/*
* Problem: 10008 - What's Cryptanalysis ?
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char letter[100];
    int frequency[100];

    for(int i = 65; i <= 90; i++) {
        letter[i] = toupper((char) i);
        frequency[i] = 0;
    }

    scanf("%d\n", &n);

    while(n--) {
        char str[1007];

        fgets(str, 1007, stdin);
        for(int i = 0; str[i]; i++)
            if(isalpha(str[i])) frequency[toupper(str[i])]++;
    }

    for(int i = 65; i < 90; i++) {
        int k = i;
        for(int j = 90; j > i; j--) {
            if(frequency[k] < frequency[j]) k = j;
            if(frequency[k] == frequency[j] && letter[j] < letter[k]) k = j;
        }
        swap(letter[k], letter[i]);
        swap(frequency[k], frequency[i]);
    }

    for(int i = 65; i <= 90; i++) {
        if(frequency[i])
            cout << letter[i] << " " << frequency[i] << "\n";
    }

    return 0;
}
