#include<stdio.h>
// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
int main ()
{
    int a;
    int b;
    int sum;
    int difference;
    int product;
    int quotient;

    
    printf("Enter the value of a\n");
    scanf("%d", &a);
    
    printf("Enter the value of b\n");
    scanf("%d", &b);

    sum = a + b;
    printf("The sum of a and b is %d\n", sum);

    difference = a - b;
    printf("The difference of a and b is %d\n", difference);

    product = a*b;
    printf("The product of a and b is %d\n", product);

    quotient = a/b;
    printf("The quotient of a and b is %d\n", quotient);

    return 0;
}