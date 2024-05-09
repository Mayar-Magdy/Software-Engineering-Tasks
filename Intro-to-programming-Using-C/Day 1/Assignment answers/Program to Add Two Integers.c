#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    printf("Enter Two Numbers : ");
    scanf("%d%d", &num1, &num2);
    // Display the sum of num1 and num2
    // Use num1 + num2 as the argument for printf
    printf("The sum is %d\n", num1 + num2);
    return 0;
}
