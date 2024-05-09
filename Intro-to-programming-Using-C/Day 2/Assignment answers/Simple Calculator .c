#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b , NumberOfOperations;

    char c;
    printf("Enter number of operations :");
    scanf("%d", &NumberOfOperations);
    int con=1;
    while (NumberOfOperations--&&con) {
        printf("Enter two numbers :");
        scanf("%d %d", &a, &b);
        printf("Enter op :");
        scanf(" %c", &c);
        switch (c) {
            case '+':
                printf("Ans = %d\n", a + b);
                break;
            case '-':
                printf("Ans = %d\n", a - b);
                break;
            case '*':
                printf("Ans = %d\n", a * b);
                break;
            case '/':
                if (!b) printf("Erorr can't divide on zero:(\n");
                else
                    printf("Ans = %d\n", a / b);
                break;
            case '%':
                printf("Ans = %d\n", a % b);
                break;
            default:
                printf("Invalid operator.\n");
        }
        printf("if you want to continue press 1, if you want to exist press 0 :");
        scanf("%d", &con);
        if(con && !NumberOfOperations) NumberOfOperations=1;

    }


    return 0;
}