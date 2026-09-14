#include<stdio.h>
//Q72: Find the sum of all elements in a matrix.
int main() {
    int row, column, sum = 0;

    scanf("%d %d", &row, &column);

    int arr[row][column];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            sum = sum + arr[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}