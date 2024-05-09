#include <iostream>
#include <graphics.h>
using namespace std;
class Point
{
    private:
        int x;
        int y;
    public:
        Point() {x=y=0;}
        Point(int l) {x=y=l;}
        Point(int _x, int _y) {x=_x; y=_y;}
        void setX(int _x) {x =_x;}
        int getX() {return x;}
        void setY(int _y) {y =_y;}
        int getY() {return y;}
};

class Shape
{
    protected:
        int color;
    public:
        Shape() {color=15;}
        Shape(int c) {color =c;}
        void setColorShape(int c) {color =c;}
        int getColorShape() {return color;}
        virtual void Draw() =0;
        virtual void Test()
        {
            outtextxy(10,10,"Shape");
        }
};

class Line : public Shape
{
    private:
        Point Start;
        Point End;
    public:
        Line(){}
        Line(int x1,int y1, int x2, int y2,int c)
        : Start(x1,y1) ,End(x2,y2), Shape(c){}
        Line(Point p1, Point p2, int c)
        {
            color = c;
            Start.setX(p1.getX());
            Start.setY(p1.getY());
            End.setX(p2.getX());
            End.setY(p2.getY());
        }

        void Draw()
        {
            setcolor(color);
            line(Start.getX(), Start.getY(), End.getX(), End.getY());
        }
        void Test()
        {
            outtextxy(30,30,"Line");
        }

};


class Circle: public Shape
{
    private:
        Point center;
        int raduis;
    public:
        Circle() {raduis=30;}
        Circle(int x1,int y1, int r, int c):center(x1,y1), Shape(c)
        {
            raduis =r;
        }
        Circle(Point p1, int r, int c)
        {
            center.setX(p1.getX());
            center.setY(p1.getY());
            raduis = r;
            color = c;
        }
        void Draw()
        {
            setcolor(color);
            circle(center.getX(), center.getY(), raduis);
        }
};

class Rect : public Shape
{
    private:
        Point UL;
        Point LR;
    public:
        Rect() {}
        Rect(int x1,int y1,int x2,int y2, int c):
            UL(x1,y1) , LR(x2,y2), Shape(c) {}
        Rect(Point p1, Point p2, int c)
        {
            UL.setX(p1.getX());
            UL.setY(p1.getY());
            LR.setX(p2.getX());
            LR.setY(p2.getY());
            color = c;
        }
        void Draw()
        {
            setcolor(color);
            rectangle(UL.getX(), UL.getY(), LR.getX(), LR.getY());
        }
};

class Picture
{
    private:
        Shape** pShapes;
        int ShSize;
    public:
        Picture()
        {
            pShapes = NULL;
            ShSize =0;
        }
        Picture(int _shSize, Shape** _pShapes)
        {
            pShapes = _pShapes;
            ShSize = _shSize;
        }
        void setShapes(int _shSize, Shape** _pShapes )
        {
            pShapes = _pShapes;
            ShSize = _shSize;
        }
        void paint()
        {
            for(int i=0; i<ShSize; i++)
            {
                pShapes[i]->Draw();
            }
        }

};


int main()
{
    initwindow(400,400);

    Rect* Rptr = new Rect(80,80,100,100,3);
    Line* Lptr = new Line(10,10,50,50,6);
    Circle* Cptr = new Circle(200,200,80,8);

    Shape* sh[3];
    sh[0] = Rptr;
    sh[1] = Lptr;
    sh[2] = Cptr;

    Picture p1;
    p1.setShapes(3,sh);
    p1.paint();

    getch();
    closegraph();

    return 0;
}
