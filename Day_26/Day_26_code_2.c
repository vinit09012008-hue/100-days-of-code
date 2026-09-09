#include<stdio.h>
/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

**/
int main() {

    for(int i = 1; i <= 3; i++) {

        for(int space = 1; space <= 3 - i; space++) {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for(int i = 2; i >= 1; i--) {

        for(int space = 1; space <= 3 - i; space++) {
            printf(" ");
        }

        for(int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}