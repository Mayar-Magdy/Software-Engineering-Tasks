#include <stdio.h>

int main()
{
    //Switch
    // arthimatic operator + - * / %
    // char ch = 'a'
    char op;
    printf("Enter Operator Like + - / * % ");
    scanf("%c",&op);
    int num1, num2;
    printf("Enter Numbers : ");
    scanf("%d %d",&num1,&num2);

    switch(op)
    {
        case '+':
            printf("sum for %d + %d = %d",num1,num2,num1+num2);
            break;
        case '-':
            printf("sub for %d - %d = %d",num1,num2,num1-num2);
            break;
        case '*':
            printf("mul for %d * %d = %d",num1,num2,num1*num2);
            break;
        case '/':
            printf("dev for %d / %d = %d",num1,num2,num1/num2);
            break;
        case '%':
            printf("mod for %d mod %d = %d",num1,num2,num1%num2);
            break;
        /*case 'a':
        case 'A':
            printf("Aa");
            break;*/
        default:
            printf("Invalid Operator Input");
    }

    return 0;
}
