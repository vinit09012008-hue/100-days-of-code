#include<stdio.h>
//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
int main(){
    int a;
    printf("Enter your number:\n");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("even number\n");
    }
    else{
        printf("odd number\n");
    }
    return 0;
}