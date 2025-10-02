#include <stdio.h>
int main() {
    int num, original, remainder, result = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (original != 0) {
        digits++;
        original /= 10;
    }
    original = num;
    while (original != 0) {
        remainder = original % 10;
        int power = remainder;
        for (int i = 1; i < digits; i++) {
            power *= remainder;
        }
        result += power;
        original /= 10;
    }
    if (result == num) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }
    return 0;
}