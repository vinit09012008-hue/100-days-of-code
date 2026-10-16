#include<stdio.h>
//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <string.h>

int main()
{
    char s[100];
    int max = 0;

    scanf("%s", s);

    int n = strlen(s);

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = i; j < n; j++)
        {
            int repeat = 0;

            for(int k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if(repeat == 1)
                break;

            count++;

            if(count > max)
                max = count;
        }
    }

    printf("%d", max);

    return 0;
}