#include <stdio.h>
void swap(int n1, int n2);
int main()
{
    int num1 = 5, num2 = 10;
    swap(num1,num2); // 5 , 10
    printf("num1 = %d \n",num1);
    printf("num2 = %d \n",num2);
    return 0;
}
void swap(int n1, int n2)// n1 = 5, n2 =10
{
    int temp;
    temp = n1; // temp = 5
    n1 = n2; // n1 = 10
    n2 = temp; // n2 =5
}
