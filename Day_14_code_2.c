#include<stdio.h>
//Q28: Write a program to print the product of even numbers from 1 to n.
int main()
{
    int n, product = 1;

    scanf("%d", &n);

    for (int i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    printf("%d", product);

    return 0;
}
