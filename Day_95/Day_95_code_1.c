#include<stdio.h>
//Q145: Return a structure containing top student's details from a function.
struct Student
{
    char name[20];
    int roll;
    int marks;
};
struct Student findTop(struct Student s[], int n)
{
    struct Student top = s[0];

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > top.marks)
        {
            top = s[i];
        }
    }

    return top;
}
int main()
{
    struct Student s[3], top;

    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    top = findTop(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}