#include <iostream>

using namespace std;
class Shape
{
    protected:
        int ar, perimeter;
    public:
        virtual void area()
        {
            ar =0;
            cout << "Area Shape = " << ar << endl;
        }
        virtual void perim()
        {
            perimeter =0;
            cout << "Perimeter Shape = " << perimeter << endl;
        }
};

class square: public Shape
{
    private:
        int side;
    public:
        square()
        {
            ar = perimeter = side =0;
        }
        void get()
        {
            cout << "Enter Side of square : " ;
            cin >> side;
        }
        void area()
        {
            ar = side * side;
            cout << "Area Square = " << ar << endl;
        }
        void perim()
        {
            perimeter = 4*side;
            cout << "Perimeter Square = " << perimeter << endl;
        }
};

class Rectangle: public Shape
{
    private:
        int width;
        int length;
    public:
        Rectangle()
        {
            ar = perimeter = width = length =0;
        }
        void inputData()
        {
            cout << "Enter Two Values for rectangle : ";
            cin >> width >> length ;
        }
        void area()
        {
            ar = length * width;
            cout << "Area Rectangle = " << ar << endl;
        }
        void perim()
        {
            perimeter = 2*(length+width);
            cout << "Perimeter Rectangle = " << perimeter << endl;
        }
};

int main()
{
    /*
    square s1;
    s1.get();
    s1.area();
    s1.perim();
    cout << endl << endl;
    Rectangle r1;
    r1.inputData();
    r1.area();
    r1.perim();
    */

    Shape *shapePtr;
    square s;
    s.get();

    shapePtr=&s;
    shapePtr->area();
    shapePtr->perim();


    Rectangle r;
    r.inputData();

    shapePtr = &r;
    shapePtr->area();
    shapePtr->perim();


    Shape sh1;
    sh1.area();

    return 0;
}
