#include<stdio.h>
//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int sum = 0;

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    int expected = n * (n + 1) / 2;
    printf("Missing number: %d\n", expected - sum);

    return 0;
}