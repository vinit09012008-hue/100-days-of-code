#include<stdio.h>
//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record
int main()
{
    FILE *file;
    char name[50];
    int rollNumber;
    float marks;
    int choice;
    file = fopen("students.txt", "w");
    if (file == NULL)
    {
        printf("Error: Could not open students.txt for writing\n");
        return 1;
    }

    do
    {
        printf("Enter student name: ");
        scanf("%s", name);
        printf("Enter roll number: ");
        scanf("%d", &rollNumber);
        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(file, "%s %d %.2f\n", name, rollNumber, marks);

        printf("Do you want to add another record? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    } while (choice == 1);

    fclose(file);
    file = fopen("students.txt", "r");
    if (file == NULL)
    {
        printf("Error: Could not open students.txt for reading\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("----------------\n");
    while (fscanf(file, "%s %d %f", name, &rollNumber, &marks) == 3)
    {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", name, rollNumber, marks);
    }

    fclose(file);
    
    return 0;
}