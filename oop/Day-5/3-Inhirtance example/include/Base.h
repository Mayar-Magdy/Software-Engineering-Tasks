#ifndef BASE_H
#define BASE_H


class Base
{
    private :
        int x;
    protected:
        int r;
    public:
        int y;
        Base();
        Base(int);
        Base(int,int,int);
        void setX(int);
        int getX();
        void setR(int);
        int getR();
        int getY();

        void MyFunction();
        void display();

        int productWZXR();


        ~Base();

};

#endif // BASE_H
