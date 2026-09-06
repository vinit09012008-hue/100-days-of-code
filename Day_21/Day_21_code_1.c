#include<stdio.h>
//Q41: Write a program to swap the first and last digit of a number.
int main() {
    int n, temp, first, last, power = 1, middle;

    scanf("%d", &n);

    last = n % 10;

    temp = n;

    while (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    middle = (n % power) / 10;

    n = last * power + middle * 10 + first;

    printf("%d", n);

    return 0;
}