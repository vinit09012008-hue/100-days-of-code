#include<stdio.h>
//Q98: Print initials of a name with the surname displayed in full.
int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    // Find the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials before surname
    printf("%c.", name[0]);

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ') {
            printf("%c.", name[i + 1]);
        }
    }
}