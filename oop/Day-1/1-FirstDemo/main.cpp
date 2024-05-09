#include <iostream>

using namespace std;

void testFunction(int num1=5, int num2=6, int num3=8)
// default argement
{
    cout << num1 << " & " << num2 << " & " << num3 << endl;
}
int main()
{
    testFunction();
    testFunction(10);
    testFunction(20,30);
    testFunction(3,4,8);

    cout << endl << endl << endl;

    int num;
    cout << "Enter Number : ";
    cin >> num;
    cout << "Number = " << num << endl;

    // allocate deallocate dynamic
    int Size;
    cout << "Enter Size for dynamic allocate : ";
    cin >> Size;

    int* ptr;
    ptr = new int [Size]; // new create , free delete
    // ptr = new float(25.2)
    for(int i=0; i<Size; i++)
    {
        cout << "Enter " << i+1 << " Element Value : ";
        cin>> ptr[i];
    }

    for(int i=0; i<Size; i++)
    {
        cout << ptr[i] << endl;
    }
    delete[] ptr;
    // delete ptr;
    return 0;
}
