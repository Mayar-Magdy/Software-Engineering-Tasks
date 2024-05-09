#ifndef FUNCTIONOVERLOAD_H
#define FUNCTIONOVERLOAD_H


class functionOverload
{

    public:
        functionOverload();
        void print(int x);
        void print(char* x);
        void print(int x, int y);
        void print(float x, float y);
        void print(float x, int y);

        void print(int x, float y);
        ~functionOverload();

};

#endif // FUNCTIONOVERLOAD_H
