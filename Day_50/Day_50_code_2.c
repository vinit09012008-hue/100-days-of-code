#include<stdio.h>
#include<string.h>
//Q100: Print all sub-strings of a string.
int main() {
    char str[100];

    scanf("%s", str);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            if (!(i == n - 1 && j == n - 1)) {
                printf(",");
            }
        }
    }