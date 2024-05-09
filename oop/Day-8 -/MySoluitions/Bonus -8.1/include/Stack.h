#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#ifndef OOP_STACK_H
#define OOP_STACK_H

template <class T>
class Stack {
private:
    int _top , _cap ;
    T* stc;
    static int Counter;
public:
    Stack();
    Stack(T val[], int n);
    void push(T);
    bool empty();
    void pop();
    T top();
    int size_st();
    int Get_Counter ();
    ~Stack();

};


#endif //OOP_STACK_H
