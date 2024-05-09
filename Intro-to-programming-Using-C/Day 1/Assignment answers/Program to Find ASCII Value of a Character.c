#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a char variable
    char c;
    printf("Enter a character : ");
    // Input a char from the user and store it in c
    // Use %c as the format specifier for char
    // Use &c as the pointer to the variable c
    scanf("%c",&c);
    // Print the ASCII value of c
    // Use %d as the format specifier for int
    // Use c as the argument for printf
    printf("The ASCII value of %c is %d", c);
    return 0;
}