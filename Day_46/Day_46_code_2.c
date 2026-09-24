#include<stdio.h>
//Q92: Find the first repeating lowercase alphabet in a string.
int main() {
    char str[100];
    int count[26] = {0};

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i] - 'a'] > 1) {
            printf("%c", str[i]);
            break;
        }
    }

    return 0;
}