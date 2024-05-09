#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <dos.h> // delay()
void helloPointer(){

    /*Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures.
     Iterating over elements in arrays or other data structures is one of the main use of pointers.
     The address of the variable you’re working with is assigned to the pointer variable that points to the same data type (such as an int or string).
    */
    system("cls");
    int num=5 , *ptr;
    ptr=&num;
    printf("num is %d\n", num);
    printf("address of num is %p\n", &num);
    printf("ptr is/pointed on %p\n", ptr);
    printf("Value at *ptr  %d\n", *ptr);
}
void sizeOfPointers()
{
    /*pointers are variables that store the address of another variable in memory. The address of a variable is a number that represents its location in the virtual memory space.
    The size of this number depends on the system architecture, such as 32-bit or 64-bit, but it does not depend on the type of the variable that the pointer points to. Therefore, pointers of different types usually take the same memory space,
    because they store numbers of the same size.*/
    system("cls");
    char *p1;
    int *p2;
    float *p3;
    double *p4;
    long *p5;

    printf("The Sizes \n");
    printf("char pointer = %d bytes\n", sizeof(p1));
    printf("int pointer = %d bytes\n", sizeof(p2));
    printf("float pointer = %d bytes\n", sizeof(p3));
    printf("double pointer = %d bytes\n", sizeof(p4));
    printf("long pointer = %d bytes\n", sizeof(p5));
}
void swaping(){
    system("cls");
    int x, y;
    printf("Enter two integers: ");
    scanf(" %d%d", &x, &y);
    printf("Before swapping x = %d and y = %d\n", x, y);
    swapByvalue(x, y);
    printf("After swapping by value x = %d and y = %d\n", x, y);
    swapByaddress(&x,&y);
    printf("After swapping by address x = %d and y = %d\n", x, y);
}
void swapByvalue(int num1, int num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}
void swapByaddress(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void arrayUsingPointer()

{
    system("cls");
    int arr[100];
    int *ptr = arr;
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    printf("Enter the elements : \n");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", (arr + i));
    }

    printf("The elements are : \n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");


}
void getchDescribed(){
    system("cls");
    // source geeksforgeeks
    /*reads a single character from the keyboard.
     But it does not use any buffer, so the entered character is immediately returned without waiting for the enter key.
     Library where getch() is stored : <conio.h>
     Input:  g (Without enter key)
     Output: Program terminates immediately.
             But when you use DOS shell in Turbo C,
             it shows a single g, i.e., 'g'
      1.getch() method pauses the Output Console until a key is pressed.
      2.It does not use any buffer to store the input character.
      3.The entered character is immediately returned without waiting for the enter key.
      4.The entered character does not show up on the console.
      5.The getch() method can be used to accept hidden inputs like password, ATM pin numbers, etc.
     */
    char pwd[5];
    printf("Enter Password: ");
    int i=0;
    for (; i < 4; ++i) {
        pwd[i] = getch();
        // Print * to show that a character is entered
        printf("*");
    }
    pwd[i] = '\0';
    printf("\n");

    printf("Entered password: ");
    for (int i = 0; pwd[i] != '\0'; ++i)
        printf("%c", pwd[i]);

    // Now the console will wait
    // for a key to be pressed
    getch(); /*This line calls the getch function again, but without assigning the returned value to anything. This makes the program wait for the user to press any key before exiting. This is done to prevent the program from closing immediately after printing the password*/

}
void try_fun(){
    //issue
    int n ;
    printf("num : ");
    scanf("%d", &n);
    printf("ur num : %d \n",n);
    char a[50] , b[6]="mayar";
    printf("string :");
    fgets(a,50,stdin);
    printf("Ur string :");
    puts(a);
    puts(b);
    printf("u want to see one of method handel this(1/0)?");
    if(getchar()=='1'){
    //solution
    int n ;
    printf("num : ");
    scanf("%d", &n);
    getchar();
    printf("ur num : %d \n",n);
    char a[50] , b[6]="mayar";
    printf("string :");
    fgets(a,50,stdin);
    printf("Ur string :");
    puts(a);
    puts(b);
    }
}

int main() {
    char choice;
    do {
        printf("Please choose one of the following options:\n");
        printf("1. create, initialize, assign and access a pointer variable.\n");
        printf("2. print size of different types of pointer variables.\n");
        printf("3. make function to swap two  integer numbers \n");
        printf("4. Store and print elements from array using pointer\n");
        printf("5. getch() describe function with simple demo \n");
        printf("0. Exit the program\n");
        printf("--------------------\n");
        printf("Enter your choice: ");

        scanf(" %c", &choice);
        printf("--------------------\n");
        getchar();
        switch(choice) {
            case '1':
                printf("I am helloPointer()\n");
                helloPointer();
                break;
            case '2':
                 printf("I am sizeOfPointers()\n");
                 sizeOfPointers();
                break;
            case '3':
               printf("I am swaping()\n");
               swaping();
                break;
            case '4':
             printf("I am arrayUsingPointer()\n");
             arrayUsingPointer();
                break;
            case '5':
                getchDescribed();
                break;
            case '0':
                printf("Goodbye!\n");
                return 0;
            default:
                try_fun();
                //printf("Please try again.\n");
                break;
        }
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        getchar();
        if (choice == 'n' || choice == 'N') {
            printf("Goodbye!\n");
            break;
        }
        else if (choice != 'y' && choice != 'Y') {
            printf("Invalid input. Please enter y or n.\n");
        }
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
