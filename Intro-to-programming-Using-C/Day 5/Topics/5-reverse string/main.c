/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int lengthString;
    printf("Input String : ");
    fgets(str,sizeof str, stdin);
    lengthString = strlen(str);
    printf("Length = %d \n",lengthString);

    for(int i=lengthString; i>=0; i--)
    {
        printf("%c  ",str[i]);
    }
    return 0;
}*/
#include <stdio.h>
#include <string.h>
#define MAX 100 // define the maximum size of the string

int main()
{
    char str1[MAX], str2[MAX]; // declare two character arrays
    int len1, len2, result; // declare some integers
    printf("Enter the first string: "); // prompt the user to enter the first string
    fgets(str1, MAX, stdin); // read the first string from the standard input
    printf("Enter the second string: "); // prompt the user to enter the second string
    fgets(str2, MAX, stdin); // read the second string from the standard input
    len1 = strlen(str1); // get the length of the first string
    len2 = strlen(str2); // get the length of the second string
    printf("The length of the first string is %d\n", len1); // print the length of the first string
    printf("The length of the second string is %d\n", len2); // print the length of the second string
    result = strcmp(str1, str2); // compare the two strings
    if (result == 0) // if the result is 0, the strings are equal
    {
        printf("The strings are equal\n");
    }
    else if (result < 0) // if the result is negative, the first string is less than the second
    {
        printf("The first string is less than the second string\n");
    }
    else // if the result is positive, the first string is greater than the second
    {
        printf("The first string is greater than the second string\n");
    }
    return 0;
}
