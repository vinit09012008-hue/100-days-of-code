#include<stdio.h>
//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
int main()
{
    FILE *inputFile;
    char ch;
    int vowels = 0, consonants = 0;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            char lowerCh = (ch >= 'A' && ch <= 'Z') ? ch + ('a' - 'A') : ch;

            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(inputFile);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}