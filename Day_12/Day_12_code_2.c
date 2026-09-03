#include<stdio.h>
//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit
int main(){
   int unit;
   printf("Enter the units used:\n");
   scanf("%d", &unit);

   if ( unit <= 100 && unit >= 0){
    printf("%d", 5 * unit);
   } else if ( unit <= 200 && unit <= 100){
    printf("%d", 7 * unit);
   }else if( unit >= 200 & unit <= 300){
    printf("%d", 10 * unit);
   } else {
    printf("%d", 12 * unit);
   }
   return 0;
}