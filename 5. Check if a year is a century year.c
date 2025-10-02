#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 100 == 0) {
        printf("Century year\n");
    } else {
        printf("Not a century year\n");
    }
    return 0;
}