#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2 , temp;
    printf("Enter two values : ");
    scanf("%d%d", &num1, &num2);
    printf("The original values are: num1 = %d and num2 = %d\n", num1, num2);
    // Swap num1 and num2 using a temporary variable
    temp = num1; // store num1 in temp
    num1 = num2; // store num2 in num1
    num2 = temp; // store temp in num2
    printf("The swapped values are: num1 = %d and num2 = %d\n", num1 , num2);
    return 0;
}
