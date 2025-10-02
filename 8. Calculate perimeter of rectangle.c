#include <stdio.h>
int main() {
    int length, width;
    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);
    printf("Perimeter: %d\n", 2 * (length + width));
    return 0;
}