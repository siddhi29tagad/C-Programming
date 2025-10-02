#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by both 3 and 5\n");
    } else if (num % 3 == 0) {
        printf("Divisible by 3 only\n");
    } else if (num % 5 == 0) {
        printf("Divisible by 5 only\n");
    } else {
        printf("Not divisible by 3 or 5\n");
    }
    return 0;
}