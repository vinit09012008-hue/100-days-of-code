#include<stdio.h>
//Q144: Write a function that accepts a structure as parameter and prints its members.
struct Student
{
    char name[20];
    int roll;
    int marks;
};

void display(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
}

int main()
{
    struct Student s;

    scanf("%s %d %d", s.name, &s.roll, &s.marks);

    display(s);

    return 0;
}