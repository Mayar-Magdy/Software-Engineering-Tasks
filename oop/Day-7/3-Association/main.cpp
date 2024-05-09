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
        void setX(int _x) {x=_x;}
        int getX() {return x;}
        void setY(int _y) {y = _y;}
        int getY(){return y;}
};

class Line
{
    private:
        Point Start;
        Point End;
    public:
        Line() {}
        Line(int a, int b,int c,int d): Start(a,b) , End(c,d) {}
        Line(Point p1, Point p2)
        {
            Start.setX(p1.getX());
            Start.setY(p1.getY());

            End.setX(p2.getX());
            End.setY(p2.getY());
        }
        void Draw()
        {
            setcolor(8);
            line(Start.getX(), Start.getY(), End.getX(), End.getY());
        }
};

class Circle
{
    private:
        Point center;
        int raduis;
    public:
        Circle() {raduis=25;}
        Circle(int x, int y, int r):center(x,y)
        {
            raduis = r;
        }
        Circle(Point _center, int r)
        {
            center.setX(_center.getX());
            center.setY(_center.getY());
            raduis = r;
        }
        void Draw()
        {
            setcolor(9);
            circle(center.getX(), center.getY(),raduis);
        }
};

class Rect
{
    private:
        Point UL;
        Point LR;
    public:
        Rect() {}
        Rect(int x1,int y1, int x2,int y2): UL(x1,y1), LR(x2,y2){}
        Rect(Point p1, Point p2)
        {
            UL.setX(p1.getX());
            UL.setY(p1.getY());
            LR.setX(p2.getX());
            LR.setY(p2.getY());
        }
        void Draw()
        {
            setcolor(YELLOW);
            rectangle(UL.getX(), UL.getY(), LR.getX(),LR.getY());
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

int main()
{
    initwindow(500,500);
    Picture pic;
    Circle cArr[3] = {Circle(50,50,50) , Circle(200,100,100), Circle(320,50,30) };
    pic.setCicles(3,cArr);
    Rect rArr[2] = {Rect(30,40,170,100) , Rect(300,50,50,200)};
    pic.setRectangles(2,rArr);

    Line lArr[2] = {Line(320,50,200,300), Line(40,400,400,300)};
    pic.setLines(2,lArr);

    pic.paint();
    getch();
    closegraph();
    return 0;
}
