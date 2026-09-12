#include<stdio.h>
//Q68: Delete an element from an array.
int main() {
    int n, position;

    scanf("%d", &n);

    int arr[100];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &position);

    for(int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}