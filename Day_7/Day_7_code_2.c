#include<stdio.h>
//Q8: Write a program to find and display the sum of the first n natural numbers.
int main(){
    int n;

    printf("Enter your number:\n");
    scanf("%d", &n);

    printf("The sum of the number is:\n%d", n*(n + 1)/2);

    return 0;
}