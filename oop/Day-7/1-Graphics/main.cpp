#include <iostream>
#include <graphics.h>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd, &gm, "");

    circle(0,100,30);
    rectangle(0,0, 200,200);
    line(100,100,250,250);
    cout << "test "<<endl;

    getch();
    closegraph();
    return 0;
}
