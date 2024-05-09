#include <bits/stdc++.h>
#include "Stack.h"
#include "./src/Stack.cpp"
using namespace std;
template <class T>
int Stack<T>::Counter = 0;
int main() {

    cout << "---------------constructors--------------\n";
    int a[] = {1, 3, 6, 8};
    int len = sizeof(a) / sizeof(a[0]);
    Stack <char> sc;
    Stack<int> s;
    cout << "The counter of s is: " << s.Get_Counter() << "\n";
    Stack<int>s1(a, len);
    cout << "The top element of s1 is : " << s1.top() << "\n";
    cout << "The counter of s1 is : " << s1.Get_Counter() << "\n";




    cout << "---------------Push----------------------\n";
    cout<<"pushing 3 ele in sc a, b, c\n";
    sc.push('a');
    sc.push('b');
    sc.push('c');
    cout<<"pushing 3 ele in s 1, 2, 5\n";
    s.push(1);
    s.push(2);
    s.push(5);
    cout << "---------------top--------------\n";
    cout << "The top in Sc is: " << sc.top() << "\n";
    cout << "The top in S  is: " << s.top() << "\n";

    cout << "---------------empty--------------\n";
    if (!s.empty()) {
        cout << "The stack is not empty.\n";
    } else {
        cout << "The stack is empty.\n";
    }



    cout << "---------------size--------------\n";
    cout << "The size of the stack is: " << s.size_st() << "\n";

    cout << "---------------pop--------------\n";
    s.pop();
    cout << "After popping an element, the top is now: " << s.top() << "\n";

    cout << "---------------counter--------------\n";
    cout << "The counter is: " << s.Get_Counter() << "\n";

    return 0;
}

