#include<stdio.h>
//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
int main() {
    int n;
    float sum = 0;
    int numerator = 2;
    int denominator = 3;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        sum = sum + (float)numerator / denominator;

        numerator = numerator + 2;
        denominator = denominator + 4;
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}