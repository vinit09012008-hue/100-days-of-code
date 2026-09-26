#include<stdio.h>
#include<string.h>
//Q96: Reverse each word in a sentence without changing the word order.
int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int start = 0;

    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            // Reverse the current word
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }

            if (str[i] == ' ')
                printf(" ");
            else
                break;

            start = i + 1;
        }
    }

    return 0;
}