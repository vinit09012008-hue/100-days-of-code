#include<stdio.h>
//Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.
int main()
{
  int late_day;
  printf("Number of late days are:\n");
  scanf("%d", &late_day);
  
  if( late_day <= 5 ){
    printf("%d", 2 * late_day);
  }
  else if( late_day <= 10 && late_day >= 5){
    printf("%d", 4 * late_day);
}else if( late_day >= 10 && late_day <= 30){
   printf("%d", 6 * late_day);
}
  else{
    printf("Membership Cancelled.");
  }
  return 0;
}