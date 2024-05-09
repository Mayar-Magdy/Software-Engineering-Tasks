#include <iostream>

using namespace std;

class Shape
{
    protected:
        int ar, perimeter;
    public:
        Shape(int _ar, int _perimter)
        {
            ar = _ar;
            perimeter = _perimter;
        }
        void area()
        {
            ar =0;
        }
        void perim()
        {
            perimeter =0;
        }
};
class square : public Shape
{
    private:
        int side;
    public:
        square(int _ar, int _perimter) : Shape(_ar, _perimter)
        {
            side =0;
        }
        square() : Shape(0,0)
        {
            side =0;
        }
        void InsertSide()
        {
            cout << "Enter Side : ";
            cin >> side;
        }
        void area()
        {
            ar = side * side;
            cout << "Area Square = " << ar << endl;
        }
        void perim()
        {
            perimeter = 4 * side;
            cout << "Perimeter Square = " << perimeter << endl;

        }
};

class Rectangle : public Shape
{
    private:
        int width, length;
    public:
        Rectangle(int _ar , int _perimter) : Shape(_ar, _perimter)
        {
            width = length = 0;
        }
        void inputData()
        {
            cout << "Enter Length and Width : " ;
            cin>> length >> width;
        }
        void area()
        {
            ar = length * width;
            cout << "Area Rectangle = " << ar << endl;
        }
        void perim()
        {
            perimeter = 2*(length+width);
            cout << "perimeter Rectangle = " << perimeter << endl;
        }
};
int main()
{
    square s0(2,6);
    s0.InsertSide();
    s0.area();
    s0.perim();

    Rectangle r1(1,1);
    r1.inputData();
    r1.area();
    r1.perim();

    //Shape sh(2,2);
    //cout << sh.ar << endl;

    return 0;
}
