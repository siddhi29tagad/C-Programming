#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b) {
        printf("Valid triangle\n");
    } else {
        printf("Not a valid triangle\n");
    }
    return 0;
}