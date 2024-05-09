#include <stdio.h>
#include <stdlib.h>
struct st
{
  char name[100];
    int id;
    char department[100];
    float gpa;
};

int main() {
    int n;
      struct st *arr;
      int sz;
      printf("Enter size: ");
      scanf(" %d",&sz);
      arr =(struct st*)malloc(sz* sizeof(struct st));
       if (!arr) {
        printf("Memory not allocated using malloc.\n");
        exit(0);
       }
  printf("Enter %d students data :\n", sz); // loop on arr
    for (int i = 0; i < sz; ++i) {
        printf("Enter the name of student: ");
        scanf("%s",(arr + i)->name);
        printf("Enter the id of student: ");
        scanf("%d",&(arr + i)->id);
        printf("Enter the department of student: ");
        scanf("%s", (arr + i)->department);
        printf("Enter the GPA of student: ");
        scanf("%f", &(arr + i)->gpa);
        printf("\n");

    }


    printf("%d data students are:\n", sz);
    for (int i = 0; i < sz; ++i) {
        printf("The name of student %d is %s\n", i + 1, (arr + i)->name);
        printf("The id of student %d is %d\n", i + 1, (arr + i)->id);
        printf("The department of student %d is %s\n", i + 1, (arr + i)->department);
        printf("The GPA of student %d is %f\n", i + 1, (arr + i)->gpa);
        printf("\n");
    }




    free(arr); //deleallocoted
    printf("Memory successfully freed.\n");
}

