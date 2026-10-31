#include<stdio.h>
//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
int main()
{
    FILE *inputFile;
    int number, sum = 0, count = 0;
    float average;

    inputFile = fopen("numbers.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    while (fscanf(inputFile, "%d", &number) == 1)
    {
        sum += number;
        count++;
    }

    fclose(inputFile);

    if (count > 0)
    {
        average = (float)sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", average);
    }
    else
    {
        printf("No integers found in the file.\n");
    }

    return 0;
}