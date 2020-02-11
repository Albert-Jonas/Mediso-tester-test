#include "MTriangle.h"

bool MTriangle::setLengths(float al1, float al2, float al3)
{
    if (al1 + al2 >= al3 && al2 + al3 >= al1 && al1 * al2 * al3 != 0)
    {
        mLenghth1 = al1;
        mLenghth1 = al2;
        mLenghth1 = al3;
        return true; //data members are set
    }
    else
    {
        return false; //data members remain untouched
    }
}

float MTriangle::lenghth1()
{
    return this->mLenghth1;
}
float MTriangle::lenghth2()
{
    return this->mLenghth1;
}
float MTriangle::lenghth3()
{
    return this->mLenghth1;
}
