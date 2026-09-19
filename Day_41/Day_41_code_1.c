#include<stdio.h>
//Q81: Count characters in a string without using built-in length functions.
int main() {

    char str[100];
    int count = 0;

    scanf("%[^\n]", str);

    while(str[count] != '\0') {
        count++;
    }

    printf("%d", count);

    return 0;
}