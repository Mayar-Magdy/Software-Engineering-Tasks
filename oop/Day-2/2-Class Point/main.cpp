#include <iostream>
#include "point.h"
#include "Student.h"
using namespace std;

int main()
{
    Point p1;
    p1.printPoint();
    Point p2(3);
    p2.printPoint();

    cout<< endl << endl << endl;
    Student s1;
    s1.setId(10);
    cout << "ID Student = " <<s1.getId()<<endl;

    Point p3(1,2);
    p3.printPoint();



    return 0;
}
