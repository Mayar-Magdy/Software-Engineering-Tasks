#include <stdio.h>

int main()
{
    /*
    // data type    variable = dataType Name = value ;
    // Name Variable = camal Case studentAge, Pascal Case StudentAge
    int FirstNumber = 10;
    printf("%d",FirstNumber);
    printf("\n"); // new line
    //int FirstNumber1 = 20; // redefination
    FirstNumber = 152;
    // format specifier int %d
    printf("%d",FirstNumber);
    printf("\n");
    int SecondNumber = 200;
    printf("%d", FirstNumber+SecondNumber);*/
    int numberOne, numberTwo;
    printf("Please enter first number : ");
    scanf("%d", &numberOne);
    printf("Please enter second number : ");
    scanf("%d", &numberTwo);

    printf("Number One = %d - Number Two = %d ,, R = %d",
           numberOne, numberTwo, numberOne+numberTwo);

    // -10 to 10 , unsigned 0 to 20


    return 0;
}
