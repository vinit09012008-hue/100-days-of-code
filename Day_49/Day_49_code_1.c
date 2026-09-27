#include<stdio.h>
//Q97: Print the initials of a name.
int main() {
    char name[100];

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("%c.", name[0]);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
    }

    return 0;
}