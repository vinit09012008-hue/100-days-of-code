#include<stdio.h>
//Q7: Write a program to swap two numbers without using a third variable
int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d", a, b);

    return 0;
}