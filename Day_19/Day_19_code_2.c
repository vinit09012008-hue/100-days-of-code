#include<stdio.h>
//Q38: Write a program to find the sum of digits of a number.
int main(){
    int n,digit,sum;
    sum = 0;
  
    scanf("%d", &n);
    while(n != 0){
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}