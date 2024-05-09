#include "Picture.h"
Picture::Picture()
{
    shapeNum = 0;
    shapePtr = NULL;
}
Picture::Picture(int _sn, Shape** _sptr)
{
    shapeNum = _sn;
    shapePtr = _sptr;
}

void Picture::paint()
{
    for(int i=0; i<shapeNum; ++i)
        shapePtr[i]->Draw();
}
