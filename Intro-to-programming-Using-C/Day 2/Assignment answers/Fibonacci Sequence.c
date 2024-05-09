#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter The number :");
    scanf(" %d", &n);
    // check if n is valid
    while (n < 0) {
        printf("Erorr Enter number large than 0 :");
        scanf(" %d", &n);
    }
    int i1 = 0, i2 = 1;

    if (n == 0) {
        printf("%d\n", i1);
        return 0;
    }
    if (n == 1) {
        printf("%d\n", i2);
        return 0;
    }
    int i3;
    printf("%d %d", i1, i2);
    for (int i = 2; i <= n; ++i) {
        i3 = i1 + i2;
        printf(" %d", i3);
        i1 = i2;
        i2 = i3;
    }
    return 0;
}