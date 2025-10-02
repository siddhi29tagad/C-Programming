#include <stdio.h>
int main() {
    float cost, sell;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cost, &sell);
    if (sell > cost) {
        printf("Profit: %.2f\n", sell - cost);
    } else if (cost > sell) {
        printf("Loss: %.2f\n", cost - sell);
    } else {
        printf("No profit, no loss\n");
    }
    return 0;
}