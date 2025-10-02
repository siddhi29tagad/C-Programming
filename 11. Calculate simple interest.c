#include <stdio.h>
int main() {
    float principal, rate, time;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    printf("Simple Interest: %.2f\n", (principal * rate * time) / 100);
    return 0;
}