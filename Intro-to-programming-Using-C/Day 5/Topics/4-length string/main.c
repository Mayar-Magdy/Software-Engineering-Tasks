#include <stdio.h>

int main()
{
    int lengthString=0;
    char str[100];
    printf("Enter string : ");
    fgets(str,sizeof str,stdin);

    while(str[lengthString] != '\0')
    {
        printf("%c ",str[lengthString]);
        lengthString++;
    }
    printf("Length of string : %d",lengthString-1);
    return 0;
}
