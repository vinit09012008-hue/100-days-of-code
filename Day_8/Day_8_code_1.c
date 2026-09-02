#include<stdio.h>
//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
int main(){
    char n;
      printf("Enter your character:\n");
        scanf("%c", &n);
          if( n < 'Z' && n >= 'A'){
            printf("uppercase alphabet");
    } 
               else if( n <='z' && n >='a'){
                 printf("lowercase alphabet");
    }
                   else if( n >='0' && n <='9'){
                     printf("Digit");
    }                  else{
                          printf("Special Character");
    }
                             return 0;
}