#include <stdio.h>
int main() {
    int num, min, max;
    printf("Enter number, minimum, and maximum: ");
    scanf("%d %d %d", &num, &min, &max);
    if (num >= min && num <= max) {
        printf("Number is in range\n");
    } else {
        printf("Number is out of range\n");
    }
    return 0;
}