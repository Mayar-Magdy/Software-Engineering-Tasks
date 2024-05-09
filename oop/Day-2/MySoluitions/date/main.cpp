#include <iostream>
#include "data.h"
using namespace std;

int main()
{
    data d1(2,12,2022) , d2(10, 5, 2027);
    d1.sub_data(d2);
    d1.sub_data_real(d2);

    return 0;
}
