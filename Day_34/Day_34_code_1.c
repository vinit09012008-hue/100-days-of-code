#inlcude<stdio.h>
//Q67: Insert an element in an array at a given position.
int main() {
    int n, position, element;

    scanf("%d", &n);

    int arr[100];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &element);

    for(int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    n++;

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}