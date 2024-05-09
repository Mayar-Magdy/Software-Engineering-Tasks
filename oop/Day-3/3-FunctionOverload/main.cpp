#include <iostream>
#include "functionOverload.h"
using namespace std;
/* standalone function deleted
void sum(int x, int y)
{
    cout << "sum int x,y = " << x + y << endl;
}
void sum(int x, int y, int z)
{
    cout << "sum int x,y,z = " << x + y + z << endl;
}*/
int main()
{
    /*standalone function deleted
    sum(1,2);
    sum(1,2,3);
    */

    functionOverload f1;
    f1.print("Mostafa");
    f1.print(1.2f, 3.5f);
    f1.print(5.3f, 6);
    f1.print(15);
    f1.print(19, 9.6f);
    f1.print(18, 26);
    return 0;
}
