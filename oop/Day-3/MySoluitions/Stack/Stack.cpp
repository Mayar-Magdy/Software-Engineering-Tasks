//
// Created by mai on 12/27/2023.
//

#include "Stack.h"
Stack::Stack() {
    _top = -1;
    _cap=16;
    stc = new int [_cap];
}
Stack::Stack(int val[], int n) {
    stc = new int[n];
    int i = 0;
    for (; i < n; ++i)
        stc[i] = val[i];
    _top = i-1;
    Counter = n;
}

void Stack::push(int val) {
    if (_top+1 == _cap) // Counter == _cap?
    {
        int *new_stc = new int[2 * _cap];
        for (int i = 0; i <= _top; ++i) {
            new_stc[i] = stc[i];
        }
        delete[] stc;
        stc = new int[2 * _cap];
        stc =   new_stc;
        stc[++_top] = val;
        ++Counter;
    } else {
        stc[++_top] = val;
        ++Counter;
    }
}
bool Stack:: empty(){
    return this->_top < 0;
}
void Stack::pop() {
    if (!empty()) {
        int *new_stc = new int[_top] ;// == new int[--Counter]
        for(int i=0; i<_top;++i)
            new_stc[i] =stc[i];
        delete[] stc;
        stc = new_stc;
        --_top;
        --Counter;
    } else cout << "Error stack is empty\n";
}

int Stack::top() {
    if(!empty())
        return stc[_top];
}
int Stack::size_st() {
        return _top+1;
}
int Stack::Get_Counter() {
    return Counter;
}

Stack::~Stack() {
    delete[] stc;
}
