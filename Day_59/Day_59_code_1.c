// Q59: Count even and odd numbers in an array.
#include<stdio.h>

int main()
{
    int a[10],n,i,e=0,o=0;
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        e++;
        else
        o++;
    }
    printf("The odd numbers in an array=%d",o);
    printf("\nThe even numbers in an array=%d",e);
    return 0;
}
