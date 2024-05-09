#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(int);
        Point(int, int);
        void setX(int);
        int getX();
        void setY(int);
        int getY();
        ~Point();

    protected:

    private:
        int x;
        int y;
};

#endif // POINT_H
