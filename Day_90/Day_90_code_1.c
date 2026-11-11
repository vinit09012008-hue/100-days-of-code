#include<stdio.h>
//Q140: Define a struct with enum Gender and print person's gender.
enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;

    p.gender = MALE;

    if (p.gender == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}