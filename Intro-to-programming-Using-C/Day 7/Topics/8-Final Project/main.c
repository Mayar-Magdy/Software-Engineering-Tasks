#include <stdio.h>
struct library
{
    char bk_name[30];
    char publisher[30];
    float price;
};

int main()
{
    struct library l[100];
    int i,j, keepcount;
    i=j= keepcount = 0;
    printf("####### Libaray Managment System ######## \n");


    while(j !=5)
    {
        printf("\n\n\n");
        printf("1-Add Book information \n");
        printf("2-Display All Books \n");
        printf("3-Display Highest price Book \n");
        printf("4-Display List Of Publishers \n");
        printf("5-Exit \n");

        printf("Enter One of the Above : ");
        scanf("%d",&j);

        switch(j)
        {
            case 1:
                // add book
                printf("Enter Book Name : ");
                scanf("%s",l[i].bk_name);
                printf("Enter Publisher Name : ");
                scanf("%s",l[i].publisher);
                printf("Enter Book Price : ");
                scanf("%f",&l[i].price);
                i++;
                keepcount++;
                system("cls"); // clear screen
                break;
            case 2:
                printf("Display All Books \n");
                for(i=0; i<keepcount; i++)
                {
                    printf("\t book name = %s\n",l[i].bk_name);
                    printf("\t publisher name = %s\n",l[i].publisher);
                    printf("\t book price = %f\n",l[i].price);
                }
                break;
            case 3:
                printf("Display highest price book : ");
                float temp=0;
                for(i=0; i<keepcount;i++)
                {
                    if(temp < l[i].price)
                        temp = l[i].price;
                }
                printf("%f",temp);
                break;
            case 4:
                printf("Display List Of Publishers : ");
                for(i=0;i<keepcount;i++)
                {
                    printf("\n %s",l[i].publisher);
                }
                break;
            case 5:
                exit(0); // return 0;
        }
    }
    return 0;
}
