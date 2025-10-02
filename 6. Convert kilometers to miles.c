#include <stdio.h>
int main() {
    float kilometers;
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    printf("Distance in miles: %.2f\n", kilometers / 1.60934);
    return 0;
}