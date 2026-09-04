#include <stdio.h>
//Q27: Write a program to print the sum of the first n odd numbers.
int main() {
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= 2 * n; i = i + 2) {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}