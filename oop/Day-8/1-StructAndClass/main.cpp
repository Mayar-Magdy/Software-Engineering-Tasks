#include <iostream>

using namespace std;
class PointClass
{
public:

  int x;
  int y;
};

class PointClassInhitance : PointClass
{
    int z = x+y;
};

struct PointStruct
{
    int x;
    int y;
};

struct PointStructInhitance : PointStruct
{
    int z;
};
int main()
{
    PointStructInhitance psi;
    psi.x = 10;
    return 0;
}
