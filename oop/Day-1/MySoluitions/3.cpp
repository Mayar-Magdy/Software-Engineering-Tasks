#include <iostream>
using namespace std;
void i_am_Square(int len , int wid = 2, string type="cm"){
    cout<<"len :" << len<<" ";
    cout<<"wid:" << wid<<" ";
    cout<<"" << type<<"\n";

}
int main()
{
 i_am_Square(2);
 cout<<"\n";
  i_am_Square(2,3);
 cout<<"\n";
  i_am_Square(2,6,"cm");

    return 0;
}

