#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Quotient: %d\n", a / b);
    } else {
        printf("Cannot divide by zero\n");
    }
    return 0;
}