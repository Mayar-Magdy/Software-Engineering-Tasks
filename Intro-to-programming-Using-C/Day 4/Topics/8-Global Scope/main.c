#include <stdio.h>
void display();
void displayTwo();
int n = 5; // global scope
int main()
{
    display();
    n = 10;
    printf("n = %d\n",n);
    displayTwo();
    printf("n = %d\n",n);
    for(int i=0; i<5; i++) // local scope
    {
        printf("I Love Programming\n");
    }

    return 0;
}
void display()
{
    ++n;
    printf("n for display function = %d\n",n);
}
void displayTwo()
{
    n=-1;
}
