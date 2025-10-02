#include <stdio.h>
int main() {
    int length, width;
    printf("Enter length and width: ");
    scanf("%d %d", &length, &width);
    printf("Area: %d\n", length * width);
    return 0;
}