#include <stdio.h>
int main() {
    float units, bill;
    printf("Enter number of units: ");
    scanf("%f", &units);
    if (units <= 50) {
        bill = units * 2.50;
    } else if (units <= 150) {
        bill = 50 * 2.50 + (units - 50) * 3.50;
    } else if (units <= 250) {
        bill = 50 * 2.50 + 100 * 3.50 + (units - 150) * 5.00;
    } else {
        bill = 50 * 2.50 + 100 * 3.50 + 100 * 5.00 + (units - 250) * 6.00;
    }
    printf("Bill amount: %.2f\n", bill);
    return 0;
}