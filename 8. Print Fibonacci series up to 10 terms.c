#include <stdio.h>
int main() {
    int a = 0, b = 1, c, i;
    for (i = 0; i < 10; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}