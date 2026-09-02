#include<stdio.h>
//Q16: Write a program to input three numbers and find the largest among them using if–else.
int main()
{
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    if(a > b && a > c){
        printf("%d is the largest", a);
    } 
         else if(b > a && b > c){
          printf("%d is the largest", b);
    }      else{
            printf("%d is the largest", c);
    }
    return 0;
}