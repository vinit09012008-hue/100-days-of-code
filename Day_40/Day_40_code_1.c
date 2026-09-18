#include<stdio.h>
//Q79: Perform diagonal traversal of a matrix.
int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[100][100];

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Upper diagonals (including main diagonal)
    for(int k = 0; k < cols; k++) {
        int i = 0, j = k;
        while(i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    // Lower diagonals
    for(int k = 1; k < rows; k++) {
        int i = k, j = cols - 1;
        while(i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}