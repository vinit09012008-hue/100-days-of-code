#include<stdio.h>
//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
int main()
{
    int a;
      printf("Enter the number:\n");
        scanf("%d", &a);
          if( a >= 0){
              if( a == 0){
                 printf("zero\n");
                  }else{
                     printf("positive\n");
                    } 
                      } else{
                       printf("negative\n");
                        }
                             return 0;
}
