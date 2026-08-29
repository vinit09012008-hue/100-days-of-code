#include<stdio.h>
// Write a program to swap two numbers without using a third variable.
int main()
{
    int a,b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
