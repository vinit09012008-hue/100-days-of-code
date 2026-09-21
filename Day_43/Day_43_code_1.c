#include<stdio.h>
//Q85: Reverse a string.
int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    printf("Reversed string: ");

    // Print string in reverse order
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}