//
// Created by mai on 12/27/2023.
//
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#ifndef OOP_STACK_H
#define OOP_STACK_H


class Stack {
private:
    int _top , _cap ;
    int* stc;
    static int Counter;
public:
    Stack();
    Stack(int val[], int n);
    void push(int);
    bool empty();
    void pop();
    int top();
    int size_st();
    int Get_Counter ();
    ~Stack();

};


#endif //OOP_STACK_H
