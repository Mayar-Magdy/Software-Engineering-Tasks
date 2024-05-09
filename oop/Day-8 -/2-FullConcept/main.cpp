#include <iostream>
#include <graphics.h>
using namespace std;
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
class Line : protected Shape
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
class DoubleLine : public Rect
{
    DoubleLine()
    {
        color=13;
        Rect r1;
        r1.Draw();

    }
};


class Picture
{
    private:
        // Association pointer
        Circle* cirPtr;
        Rect* RecPtr;
        Line* LinePtr;

        int CirNum;
        int RectNum;
        int LineNum;
    public:
        Picture()
        {
            CirNum=RectNum=LineNum=0;
            cirPtr = NULL;
            RecPtr = NULL;
            LinePtr = NULL;
        }
        Picture(int cn, int rn, int ln, Circle* pc, Rect* pr, Line* pl)
        {
            CirNum = cn;
            RectNum = rn;
            LineNum = ln;
            cirPtr = pc;
            RecPtr = pr;
            LinePtr=pl;
        }
        void setCicles(int cn, Circle* cptr)
        {
            CirNum = cn;
            cirPtr = cptr;
        }
        void setRectangles(int rn, Rect* rptr)
        {
            RectNum = rn;
            RecPtr = rptr;
        }
        void setLines(int ln, Line* lptr)
        {
            LineNum = ln;
            LinePtr = lptr;
        }

        void paint()
        {
            for(int i=0; i<RectNum; i++)
            {
                RecPtr[i].Draw();
            }
            for(int i=0; i<CirNum; i++)
            {
                cirPtr[i].Draw();
            }
            for(int i=0; i<LineNum; i++)
            {
                LinePtr[i].Draw();
            }
        }

};

class Paper
{
    private:
        Picture* pic;
};


int main()
{
    initwindow(400,400);
    Point p1(50,50);
    Point p2(350,350);
    Line l1(p1,p2,8);
    l1.Draw();
    l1.Test();

    Circle c1(p1,50,9);
    c1.Draw();
    c1.Test();

    Rect r1(p1,p2,12);
    r1.Draw();
    getch();
    closegraph();

    return 0;
}
