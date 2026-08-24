#include<stdio.h>
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
int main()
{
  int length;
  int breadth;
  int Area;

  printf("Enter your first side\n");
  scanf("%d", &length);
  
  printf("Enter your second side\n");
  scanf("%d", &breadth);
  
   Area= length*breadth;

  printf("Area of rectangle %d", Area);
  scanf("%d", &Area);

  return 0;
}