#include <stdio.h>
int main() {
    int num, original, reversed = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    return 0;
}