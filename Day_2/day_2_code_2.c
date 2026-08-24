#include<stdio.h>
//Q4: Write a program to calculate the area and circumference of a circle given its radius.
int main()
{
  int radius;
 

  printf("Enter your radius\n");
  scanf("%d", &radius);
  
  printf("Area of circle is %f", 3.14*radius*radius);
  printf("Circumference of circle is %f", 2*3.14*radius);

  return 0;
}