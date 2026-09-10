#include<stdio.h>
//Q60: Count positive, negative, and zero elements in an array.
Bilkul Vinit 👍 Q60, Q59 jaisa hi hai. Bas yahan array ke har element ko positive, negative, ya zero check karna hai.
#include <stdio.h>

int main() {
    int n;
    int positive = 0, negative = 0, zero = 0;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {

        if(arr[i] > 0) {
            positive++;
        }
        else if(arr[i] < 0) {
            negative++;
        }
        else {
            zero++;
        }
    }

    printf("Positive=%d, Negative=%d, Zero=%d",
           positive, negative, zero);

    return 0;
}