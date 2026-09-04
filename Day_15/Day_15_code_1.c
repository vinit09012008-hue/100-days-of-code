#include<stdio.h>
//Q29: Write a program to calculate the factorial of a number.
int main()
{
    int n, factorial = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("%d", factorial);

    return 0;

}