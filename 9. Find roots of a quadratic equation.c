#include <stdio.h>
int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (a != 0) {
        if (discriminant > 0) {
            root1 = (-b + discriminant) / (2 * a);
            root2 = (-b - discriminant) / (2 * a);
            printf("Root1: %.2f, Root2: %.2f\n", root1, root2);
        } else if (discriminant == 0) {
            root1 = -b / (2 * a);
            printf("Root: %.2f\n", root1);
        } else {
            printf("No real roots\n");
        }
    } else {
        printf("Not a quadratic equation\n");
    }
    return 0;
}