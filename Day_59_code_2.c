#include<stdio.h>
//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
int main() {
    int n, k, arr[1000];
    int sum = 0, maxSum;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}