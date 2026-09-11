#include<stdio.h>
//Q64: Find the digit that occurs the most times in an integer number.
    int main() {
    long long n;
    int count[10] = {0};

    scanf("%lld", &n);

    while(n != 0) {
        int digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    int max = count[0];
    int answer = 0;

    for(int i = 1; i < 10; i++) {

        if(count[i] > max) {
            max = count[i];
            answer = i;
        }
        else if(count[i] == max && i < answer) {
            answer = i;
        }
    }

    printf("%d", answer);

    return 0;
}
