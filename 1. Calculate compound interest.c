#include <stdio.h>
int main() {
    float principal, rate, time, amount;
    int years;
    printf("Enter principal, rate, time, and number of times interest applied annually: ");
    scanf("%f %f %f %d", &principal, &rate, &time, &years);
    amount = principal * (1 + rate / (100 * years)) * (time * years);
    printf("Compound Interest: %.2f\n", amount - principal);
    return 0;
}