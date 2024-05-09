#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void inputOutputStr();
void displayStr();
void lenStr();
int len(char str[]);
void compare();
int cmp(char str1[] ,char str2[] );
void copyStr();
void copy(char str1[] ,char str2[]);
void concatenate();
void con(char str1[] ,char str2[]);

int main() {
    char choice;
    do {
        printf("Please choose one of the following options:\n");
        printf("1. Input and output a string\n");
        printf("2. Find the length of a string\n");
        printf("3. Compare two strings\n");
        printf("4. Copy a string\n");
        printf("5. Concatenate two strings\n");
        printf("0. Exit the program\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        getchar();
        switch(choice) {
            case '1':
                inputOutputStr();
                break;
            case '2':
                lenStr();
                break;
            case '3':
                compare();
                break;
            case '4':
                copyStr();
                break;
            case '5':
                concatenate();
                break;
            case '0':
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Please try again.\n");
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
void inputOutputStr() {
    printf("1.By C language \n");
    // built in
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);
    printf("String : ");
    puts(str);
    printf("\n\n\n");
    //code
    printf("2.By developer \n");
    displayStr();
}
void displayStr(){
    printf("Enter the string: ");
    char str[100];
    for(int i=0; i<100; ++i)
    {
        scanf("%c",&str[i]);
        if(str[i] == '\n') break;
    }
    printf("String : ");
    int len=0;
    while(str[len] != '\n')
    {
        printf("%c",str[len]);
        ++len;
    }
    printf("\n");

}
void lenStr(){
    printf("1.By C language \n");
    // built in
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof str, stdin);
    printf("String length : %d ",strlen(str)-1);
    printf("\n\n\n");
    //code
    printf("2.By developer \n");
    printf("String length : %d ",len(str)-1);
    printf("\n");

}
int len(char str[]){
    int len=0;
    while(str[len] != '\0')
        len++;
    return len;
}
void compare(){
    // goal is use&emp strcmp()
    //built in
    printf("1.By C language \n");
    char str1[100], str2[100];
    int len1, len2, res , res1;
    printf("First string: ");
    fgets(str1, sizeof str1, stdin);
    printf("Second string: ");
    fgets(str2, sizeof str2, stdin);
    printf("\n\n\n");
    len1 = strlen(str1)-1;
    len2 = strlen(str2)-1;
    printf("The length of the first string is %d\n", len1);
    printf("The length of the second string is %d\n", len2);
    res = strcmp(str1, str2);
    if(!res) printf("First string = Second string");
    else if(res<0) printf("First string < Second string");
    else printf("First string > Second string");
    printf("\n\n\n");
    //code
    printf("2.By developer \n");
    res1=cmp( str1,str2 );
    if(!res1) printf("First string = Second string");
    else if(res1<0) printf("First string < Second string");
    else printf("First string > Second string");
    printf("\n");
}
int cmp(char str1[] ,char str2[] ){

    int len1 = 0, len2 = 0,minLen, i = 0, flag = 0;

    while (str1[len1] != '\0')
        ++len1;
    while (str2[len2] != '\0')
        ++len2;
    if (len1<len2) minLen=len1;
    else minLen=len2;
    while (i < minLen)
    {
        if (str1[i] > str2[i])
        {
            flag = 1;
            break;
        }
        else if (str1[i] < str2[i])
        {
            flag = -1;
            break;
        }
        ++i;
    }
    return flag;
}
void copyStr(){
// goal is use&emp strcpy()
//built in
    printf("1.By C language \n");
    char str1[100], str2[100];
    int len1, len2, res;
    printf("First string: ");
    fgets(str1, sizeof str1, stdin);
    printf("Second string: ");
    fgets(str2, sizeof str2, stdin);
    printf("\n\n");
    strcpy(str1,str2);//copy 2 in 1
    printf("First string: %s", str1);
    printf("Second string: %s", str2);
    printf("\n\n\n");

    //emp
    printf("2.By developer \n");
    char str[100], str0[100];
    printf("First string: ");
    fgets(str, sizeof str, stdin);
    printf("Second string: ");
    fgets(str0, sizeof str0, stdin);
    printf("\n\n");
    copy(str,str0);
    printf("First string : %s", str);
    printf("Second string: %s", str0);
    printf("\n");
}
void copy(char str1[] ,char str2[]){
    int i=0;
    while (str2[i]!='\0'){
        str1[i]=str2[i];
        ++i;
    }
    str1[i]='\0';

}
void concatenate(){
    // goal is use&emp strcat()
    // built in
    printf("1.By C language \n");
    char str1[100], str2[100];
    printf("First string: ");
    fgets(str1, sizeof str1, stdin);
    printf("Second string: ");
    fgets(str2, sizeof str2, stdin);
    printf("\n\n");
    // handel the line case
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') // end of words
        {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    strcat(str1,str2);//copy 1 + 2
    printf("concatenated string : %s", str1);
    printf("\n\n\n");
    //emp
    //strcat
    printf("2.By developer \n");
    char str[100], str0[100];
    printf("First string: ");
    fgets(str, sizeof str, stdin);
    printf("Second string: ");
    fgets(str0, sizeof str0, stdin);
    printf("\n\n");
    con(str,str0);
//    printf("First string : %s", str);
    printf("concatenated string : %s", str);
    printf("\n");
//    printf("Second string: %s", str0);
}
void con(char str1[] ,char str2[]){
    int i = 0,j=0 ;
    while (str1[i] != '\0') {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
        ++i; //3raft a5ry fen
    }

    while (str2[j]!='\0') {
        str1[i]=str2[j];
        ++i;
        ++j;
    }
    str1[i]='\0'; //add ter
}
