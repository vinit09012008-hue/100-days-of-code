#include<stdio.h>
//Q1: Write a program to input two numbers and display their sum.
int main()
{
    int a;
    int b;
    int sum;
    
    printf("Enter the value of a\n");
    scanf("%d", &a);
    
    printf("Enter the value of b\n");
    scanf("%d", &b);

    sum = a + b;
    printf("The sum of a and b is %d", sum);

    return 0;
}