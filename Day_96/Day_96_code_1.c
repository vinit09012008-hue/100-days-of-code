#include<stdio.h>
//Q146: Create Employee structure with nested Date structure for joining date and print details.
struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[20];
    int id;
    struct Date joining;
};

int main()
{
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter joining date (DD MM YYYY): ");
    scanf("%d %d %d",
          &e.joining.day,
          &e.joining.month,
          &e.joining.year);

    printf("\nName: %s | ID: %d | Joining Date: %02d/%02d/%d",
           e.name,
           e.id,
           e.joining.day,
           e.joining.month,
           e.joining.year);

    return 0;
}