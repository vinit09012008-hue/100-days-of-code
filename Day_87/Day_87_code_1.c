#include<stdio.h>
//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;

    role = GUEST;

    switch(role) {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}