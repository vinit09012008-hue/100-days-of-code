#include<stdio.h>
// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
int main(){
    int a , b ,c;
    printf("Enter the first side:\n");
    scanf("%d", &a);
    
    printf("Enter the second side:\n");
    scanf("%d", &b);
    
    printf("Enter the third side:\n");
    scanf("%d", &c);
    
    if ( a == b && b == c){
        printf("Equilateral Triangle.");
    } 
    else if ( a == b || b == c || a == c){
        printf("Isoceles Triangle.");
    } 
    else{ 
        printf("Scalene Triangle.");
    }

   return 0;
}