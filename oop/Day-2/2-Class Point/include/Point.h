#ifndef POINT_H
#define POINT_H


class Point
{
    private:
        int x;
        int y;
    public:
        Point();
        Point(int);
        Point(int, int);
        void setX(int);
        int getX();
        void setY(int);
        int getY();
        void printPoint();
        ~Point();
};

#endif // POINT_H
