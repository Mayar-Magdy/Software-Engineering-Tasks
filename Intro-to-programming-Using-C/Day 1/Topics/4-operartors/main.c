#include <stdio.h>
// 10 / 3 = 3 , 1
// 12 / 5 = 2 , 2
int main()
{
    int x, y , addTwoNumbers, subTwoNumbers, multiplayTwo, devide,modTwo;
    printf("Enter First Number : ");
    scanf("%d",&x);
    printf("Enter Second Number : ");
    scanf("%d",&y);

    addTwoNumbers = x + y;
    subTwoNumbers = x - y;
    multiplayTwo = x * y;
    devide = x / y;
    modTwo = x % y; // int

    printf("%d + %d = %d\n",x,y,addTwoNumbers);
    printf("%d - %d = %d\n",x,y,subTwoNumbers);
    printf("%d * %d = %d\n",x,y,multiplayTwo);
    printf("%d / %d = %d\n",x,y,devide);
    printf("%d // %d = %d",x,y,modTwo);



    return 0;
}
