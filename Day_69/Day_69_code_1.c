#include<stdio.h>
//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
int main()
{
    int a[100], freq[100] = {0};
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if(freq[a[i]] == 1)
        {
            printf("%d", a[i]);
            return 0;
        }

        freq[a[i]]++;
    }

    return 0;
}