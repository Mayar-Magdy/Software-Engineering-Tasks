#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare an integer variable to store the input number
    int Number;
    // Prompt the user to enter a number and store it in Number
    printf("Enter a Number ");
    // Use %d as the format specifier for int
    // Use &Number as the pointer to the variable Number
    scanf("%d" ,&Number);
    // Display the number entered by the user
    // Use %d as the format specifier for int
    // Use Number as the argument for printf
    printf(" The Number you entered is  %d" , Number);
    return 0;
}

