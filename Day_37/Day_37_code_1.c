#include<stdio.h>
//Q73: Find the sum of each row of a matrix and store it in an array.
int main() {

    int row, column;

    scanf("%d %d", &row, &column);

    int arr[row][column];
    int sum[row];

    // Input Matrix
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Row Sum
    for(int i = 0; i < row; i++) {

        sum[i] = 0;

        for(int j = 0; j < column; j++) {
            sum[i] = sum[i] + arr[i][j];
        }
    }

    // Print Sum Array
    for(int i = 0; i < row; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}