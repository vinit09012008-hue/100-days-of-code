#include<stdio.h>
//Q37: Write a program to find the LCM of two numbers.
int main(){
    int a,b,lcm;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    for(int i = 1; ;i++){
        if(i % a == 0 && i % b ==0){
            lcm = i;
            break;
        }
    }
    printf("%d", lcm);
    return 0;
}