#ifndef MAYARCLASS_H
#define MAYARCLASS_H

template <class T>
class MayarClass
{
    public:
        MayarClass();
        void display(T x);
        ~MayarClass();

    protected:

    private:
        T x;
};

#endif // MAYARCLASS_H
