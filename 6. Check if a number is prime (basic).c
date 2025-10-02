#include <stdio.h>
int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime && num > 1) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    return 0;
}