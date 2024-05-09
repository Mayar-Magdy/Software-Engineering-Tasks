#include "Stack.h"
template <class T>
Stack<T>::Stack() {
    _top = -1;
    _cap=16;
    stc = new T [_cap];
}
template <class T>
Stack<T>::Stack(T val[], int n) {
    stc = new T[n];
    int i = 0;
    for (; i < n; ++i)
        stc[i] = val[i];
    _top = i-1;
    Counter = n;
}
template <class T>
void Stack<T>::push(T val) {
    if (_top+1 == _cap) // Counter == _cap?
    {
        T *new_stc = new T[2 * _cap];
        for (int i = 0; i <= _top; ++i) {
            new_stc[i] = stc[i];
        }
        delete[] stc;
        stc = new T[2 * _cap];
        stc =   new_stc;
        stc[++_top] = val;
        ++Counter;
    } else {
        stc[++_top] = val;
        ++Counter;
    }
}
template <class T>
bool Stack<T>:: empty(){
    return this->_top < 0;
}
template <class T>
void Stack<T>::pop() {
    if (!empty()) {
        T *new_stc = new T[_top] ;// == new int[--Counter]
        for(int i=0; i<_top;++i)
            new_stc[i] =stc[i];
        delete[] stc;
        stc = new_stc;
        --_top;
        --Counter;
    } else cout << "Error stack is empty\n";
}
template <class T>
T Stack<T>::top() {
    if(!empty())
        return stc[_top];
}
template <class T>
int Stack<T>::size_st() {
        return _top+1;
}
template <class T>
int Stack<T>::Get_Counter() {
    return Counter;
}
template <class T>
Stack<T>::~Stack() {
    delete[] stc;
}
