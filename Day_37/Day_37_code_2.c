#include<stdio.h>
//Q74: Find the transpose of a matrix.
int main() {

    int row, column;

    scanf("%d %d", &row, &column);

    int arr[row][column];

    // Input Matrix
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Print Transpose
    for(int i = 0; i < column; i++) {

        for(int j = 0; j < row; j++) {

            printf("%d ", arr[j][i]);

        }

        printf("\n");
    }

    return 0;
}