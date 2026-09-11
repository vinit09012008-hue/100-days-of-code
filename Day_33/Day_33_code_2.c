#include<stdio.h>
//Q66: Insert an element in a sorted array at the appropriate position.
int main() {
    int n, element;

    scanf("%d", &n);

    int arr[100];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    int i;

    for(i = n - 1; i >= 0 && arr[i] > element; i--) {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = element;

    n++;

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}