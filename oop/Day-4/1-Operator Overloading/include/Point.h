#ifndef POINT_H
#define POINT_H


class Point
{
    public:
        Point();
        Point(int , int);
        void Print();

        Point operator+(Point);
        bool operator>=(Point);
        ~Point();

    private:
        int x;
        int y;
};

#endif // POINT_H
