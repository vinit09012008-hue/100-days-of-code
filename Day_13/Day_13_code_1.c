#include <stdio.h>
// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
int main() {
    int a, b;
    char operator;

    scanf("%d %d %c", &a, &b, &operator);

    switch (operator) {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            printf("%d", a / b);
            break;

        case '%':
            printf("%d", a % b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

