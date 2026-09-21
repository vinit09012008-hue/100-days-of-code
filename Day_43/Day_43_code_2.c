#include<stdio.h>
//Q86: Check if a string is a palindrome.
int main()
{
    char str[100];
    int length = 0, i, palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}