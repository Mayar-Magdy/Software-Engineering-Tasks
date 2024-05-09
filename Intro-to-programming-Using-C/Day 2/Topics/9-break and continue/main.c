#include <stdio.h>

int main()
{
    // end loop : break
    // skip step : continue
    /*
    int i=0;
    while(i<10)
    {
        printf("%d \n",i);
        i++;
        if(i == 3)
        {
            break;
        }
    }*/

    int i=0;
    while(i<10)
    {
        if(i==4)
        {
            i++;
            continue; // i=4
        }
        printf("%d , ",i); // 0,1,2,3,5
        i++;
    }
    return 0;
}
