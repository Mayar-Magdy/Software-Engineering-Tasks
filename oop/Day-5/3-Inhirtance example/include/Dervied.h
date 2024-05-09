#ifndef DERVIED_H
#define DERVIED_H
#include "Base.h"

class Dervied : public Base
{
    private:
        int w;
    protected:
        //
    public:
        int y;
        int z;
        Dervied();
        Dervied(int);
        Dervied(int,int,int,int,int);
        void MyFunction();
        ~Dervied();

        int productWZXR();

};

#endif // DERVIED_H
