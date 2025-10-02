#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 2; i <= num; i += 2) {
        sum += i;
    }
    printf("Sum of even numbers: %d\n", sum);
    return 0;
}