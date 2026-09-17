#include<stdio.h>
//Q77: Check if the elements on the diagonal of a matrix are distinct.
int main()
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int a[100][100];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int distinct = 1;

    for(int i = 0; i < rows && i < cols; i++)
    {
        for(int j = i + 1; j < rows && j < cols; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if(distinct == 0)
            break;
    }

    if(distinct)
        printf("True");
    else
        printf("False");

    return 0;
}