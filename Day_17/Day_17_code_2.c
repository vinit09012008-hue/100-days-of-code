#include<stdio.h>
//Q34: Write a program to check if a number is prime.
int main() {
    int n, count = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("Prime");
    }
    else {
        printf("Not prime");
    }

    return 0;
}