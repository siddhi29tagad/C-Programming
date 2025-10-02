#include <stdio.h>
int main() {
    int start, end, i, j;
    printf("Enter start and end numbers: ");
    scanf("%d %d", &start, &end);
    for (i = start; i <= end; i++) {
        for (j = 1; j <= 5; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}