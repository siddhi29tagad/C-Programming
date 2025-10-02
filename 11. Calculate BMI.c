#include <stdio.h>
int main() {
    float weight, height;
    printf("Enter weight (kg) and height (m): ");
    scanf("%f %f", &weight, &height);
    printf("BMI: %.2f\n", weight / (height * height));
    return 0;
}