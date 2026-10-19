#include<stdio.h>
//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
int main()
{
    int a[100], b[100], c[200];
    int m, n;
    int i = 0, j = 0, k = 0;

    // Size of first array
    scanf("%d", &m);

    // Elements of first array
    for(i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    // Size of second array
    scanf("%d", &n);

    // Elements of second array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    i = 0;

    // Merge the two sorted arrays
    while(i < m && j < n)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    // Remaining elements of first array
    while(i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // Remaining elements of second array
    while(j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    // Print merged array
    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}