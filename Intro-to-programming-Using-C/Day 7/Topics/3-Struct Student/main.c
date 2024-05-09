#include <stdio.h>
struct student
{
    char name[20];
    int studentNo;
    float grade;
};

int main()
{
    struct student student1;
    struct student *ptr;
    ptr = &student1;

    printf("Enter Student Name : ");
    // name , sizeof(name), stdin
    // -> selection operator
    fgets(ptr->name, sizeof(ptr->name),stdin);
    printf("Enter Student Number : ");
    scanf("%d",&ptr->studentNo);
    printf("Enter Student Grade : ");
    scanf("%f",&ptr->grade);


    printf("\n\n--------------- Student Data ------------- \n");
    printf("Student Name : %s",ptr->name);
    printf("Student Number : %d\n",ptr->studentNo);
    printf("Student Grade : %f\n\n",ptr->grade);

    return 0;
}
