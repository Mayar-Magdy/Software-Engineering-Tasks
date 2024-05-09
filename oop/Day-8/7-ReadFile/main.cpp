#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ifstream myfile("example.txt");
    if(myfile.is_open())
    {
        while(getline(myfile, line))
        {
            cout << line << endl;
        }
        myfile.close();
    }
    else
    {
        cout << "can not open file" << endl;
    }
    return 0;
}
