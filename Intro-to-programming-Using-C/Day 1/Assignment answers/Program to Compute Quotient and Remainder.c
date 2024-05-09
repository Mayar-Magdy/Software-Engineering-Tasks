#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    printf("Enter two values : ");
    scanf("%d%d", &num1, &num2);
    // Print the quotient of num1 and num2
    printf("The quotient is %d\n", num1 / num2);
    // Print the remainder of num1 and num2
    printf("The remainder is %d\n", num1 % num2);
    return 0;
}