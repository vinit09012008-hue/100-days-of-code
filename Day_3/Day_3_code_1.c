#include<stdio.h>
//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
int main()
{
    float celsius;
    float fahrenheit;
    float c;
    printf("Enter your temperature in celsius:\n");
    scanf("%f", &celsius);
    c = celsius * 1.8 + 32;
    printf("Your temperature in fahrenheit is \n %f", c );

    return 0;
}