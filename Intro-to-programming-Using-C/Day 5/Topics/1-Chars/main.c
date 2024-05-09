#include <stdio.h>

int main()
{
    /*
    char m = 'D';
    char n = 49;
    printf("Ascii code of %c = %d\n",m,m);
    printf("Ascii code of %c = %d",n,n);
    */
    /*
    char ch1= 'A';
    char ch2= 'L';
    char ch3= 'I';
    scanf("%c %c %c",&ch1,&ch2,&ch3);
    printf("%c%c%c = %d %d %d",ch1,ch2,ch3, ch1,ch2,ch3);
    */

    /*
    char str[5];
    for(int i=0; i<5; i++ )// 5 = sizeof(str)
    {
        scanf("%c",&str[i]);
    }
    for(int i=0; i<5; i++ )
    {
        printf("%c",str[i]);
    }*/

    /*
    //char arrch[5]= {'a','b','c','d','\0'};
    //char arrch2[]= {'a','b','c','d','\0'};

    //char c[50]= "abcd";
    //char d[]="abcd";

    char name[20];
    printf("Enter Name : ");
    scanf("%s",name);
    printf("Your Name is %s",name);
    */

    char name[30]; // concept fixed size
    printf("Enter Name : ");
    fgets(name,sizeof(name),stdin); // read line
    printf("Name : ");
    puts(name); // enter

    return 0;
}
