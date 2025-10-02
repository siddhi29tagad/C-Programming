#include <stdio.h>
int main() {
    int days;
    printf("Enter number of days: ");
    scanf("%d", &days);
    printf("Years: %d\nWeeks: %d\nDays: %d\n", days / 365, (days % 365) / 7, days % 7);
    return 0;
}