#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile("example.txt");
    if(myfile.is_open())
    {
        myfile << "Third Line " << endl;
        myfile << "Five Line " << endl ;
        myfile.close();
    }
    else
        cout << "can not open file" << endl;
    return 0;
}
