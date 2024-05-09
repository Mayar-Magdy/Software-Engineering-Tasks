#include <iostream>

using namespace std;

template<class t1, class t2>
void sum(t1 a, t2 b)
{
    cout << a+b << endl;
}

template<class t1>
void Test(t1 c)
{
    cout << "Print : " << c << endl;
}

template<typename type1, typename type2, typename typeOutput=float>
typeOutput Max(type1 a, type2 b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{

    // int , float, double
    // char , string
    sum<char,string>('A'," Hello");

    Test<int>(10);

    cout << "Max = " << Max<int,float>(12,44.23) << endl;
    cout << "Max = " << Max<int,int>(12,44) << endl;
    cout << "Max = " << Max<string,string,string>("0bcd","1bcdd") << endl;
    return 0;
}
