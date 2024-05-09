#include "Picture.h"
Picture::Picture()
{
    CirNum=RectNum=LineNum=0;
    cirPtr = NULL;
    RecPtr = NULL;
    LinePtr = NULL;
}
Picture::Picture(int _cn, int _rn, int _ln, Circle* _cptr, Rect* _rptr, Line* _lptr)
{
    CirNum = _cn;
    RectNum = _rn;
    LineNum = _ln;
    cirPtr = _cptr;
    RecPtr = _rptr;
    LinePtr= _lptr;
}
void Picture::setCicles(int _cn, Circle* _cptr)
{
    CirNum = _cn;
    cirPtr = _cptr;
}
void Picture::setRectangles(int _rn, Rect* _rptr)
{
    RectNum = _rn;
    RecPtr = _rptr;
}
void Picture::setLines(int _ln, Line* _lptr)
{
    LineNum = _ln;
    LinePtr = _lptr;
}

void Picture::paint()
{
    for(int i=0; i<RectNum; ++i)
        RecPtr[i].Draw();
    for(int i=0; i<CirNum; ++i)
        cirPtr[i].Draw();
    for(int i=0; i<LineNum; ++i)
        LinePtr[i].Draw();
}
