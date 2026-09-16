#include<stdio.h>
//Q76: Check if a matrix is symmetric.
int main()
{
    int r, c;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(r != c)
    {
        printf("False");
        return 0;
    }

    int flag = 1;

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
        {
            break;
        }
    }

    if(flag == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}