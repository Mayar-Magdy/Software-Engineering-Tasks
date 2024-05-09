#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void hello_Pointer_TO_Pointer(){

    int x = 10;
    int *ptr1;
    int **ptr2;

    ptr1 = &x;
    ptr2 = &ptr1;

   // value of x
    printf("Value of x = %d\n", x);
    printf("Value of *ptr1 = %d\n", *ptr1);
    printf("Value of **ptr2 = %d\n", **ptr2);
     // address x
    printf("Address of x= %p \n",&x);
    printf("Address of x= %p \n",ptr1);
    printf("Address of x= %p \n",*ptr2);

  printf("\n");
    // address ptr 1
    printf("address of  ptr1: %p\n",&ptr1);
     printf("Address of ptr1 = %p \n", *(&ptr2) );
    printf("address of  ptr1: %p\n",ptr2);
  printf("\n");
    //address ptr2
    printf("address of ptr2: %p ",&ptr2);
    printf("\n");
}

void Student_System(){
    struct student {
    char name[100];
    int id;
    char department[100];
    float gpa;
};
int n;
printf("Enter the number of students: ");
scanf("%d", &n);
struct student s[n];
for (int i = 0; i < n; ++i) {
    printf("Enter the name of student: ");
    scanf("%s", s[i].name);
    printf("Enter the id of student: ");
    scanf("%d", &s[i].id);
    printf("Enter the department of student: ");
    scanf("%s", s[i].department);
    printf("Enter the gpa of student: ");
    scanf("%f", &s[i].gpa);
    printf("Finshed :)\n\n");
}

for (int i = 0; i < n; ++i) {
    printf("Name of student %d: %s\n", i + 1, s[i].name);
    printf("Id of student %d: %d\n", i + 1, s[i].id);
    printf("Department of student %d: %s\n", i + 1, s[i].department);
    printf("GPA of student %d: %f\n", i + 1, s[i].gpa);
     printf("\n");
}
 printf("Finshed :)\n");
}



int main() {
    char choice;
    do {
        printf("Please choose one of the following options:\n");
        printf("1. Example on pointer to pointer.\n");
        printf("2. read and print the N student.\n");
        printf("0. Exit the program\n");
        printf("--------------------\n");
        printf("Enter your choice: ");

        scanf(" %c", &choice);
        printf("--------------------\n");
        getchar();
        switch(choice) {
            case '1':
                printf("I am hello_Pointer_TO_Pointer()\n");
                hello_Pointer_TO_Pointer();
                break;
            case '2':
                 printf("I am Student_System()\n");
                Student_System();
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
