#include<stdio.h>
//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main() {
    int n, k, a[1000], first;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    for (int i = 0; i <= n - k; i++) {
        first = 0;

        for (int j = i; j < i + k; j++) {
            if (a[j] < 0) {
                first = a[j];
                break;
            }
        }

        printf("%d ", first);
    }

    return 0;
}