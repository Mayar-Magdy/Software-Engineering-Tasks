#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "Enter First String : ";
    char* s1 = new char[11];
    cin>>s1;
    cout << "Enter Second String : ";
    char* s2 = new char[11];
    cin>>s2;

    string s3 = "Hello";

    /*
    // concatenation two string
    strcat(s1, " ");
    strcat(s1,s2);
    cout << s1 << endl;

    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2;
    cout << str3 << endl;
    */
    /*
    // string length
    cout << strlen(s1) << endl;
    int length = s3.size();
    cout << length << endl;
    */

    //string copy
    cout << strcpy(s1,s2) << endl;

    string test = "test";
    string newTest = test;
    cout << newTest << endl;
    delete[] s1;
    delete[] s2;
    return 0;
}
