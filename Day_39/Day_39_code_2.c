#include<stdio.h>
//Q78: Find the sum of main diagonal elements for a square matrix.
int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[100][100];
    int sum = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < rows; i++)
    {
        sum += a[i][i];
    }

    printf("%d", sum);

    return 0;
}