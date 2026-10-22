#include<stdio.h>
#include<string.h>
//Q120: Write a program to take a string input. Change it to sentence case.
int main() {
    char str[1000];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(i == 0 || str[i-1] == ' ') {
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }

    printf("%s", str);

    return 0;
}