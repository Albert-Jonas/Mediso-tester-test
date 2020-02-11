#include "MTriangle.h"

MTriangle::MTriangle(float l1, float l2, float l3)
    : mLenghth1(l1)
    , mLenghth2(l2)
    , mLenghth3(l3)
{}

bool MTriangle::isValid() const noexcept
{
    return mLenghth1 + mLenghth2 >= mLenghth3 &&
           mLenghth2 + mLenghth3 >= mLenghth1 &&
           mLenghth1 * mLenghth2 * mLenghth3 != 0;
}

float MTriangle::lenghth1()  const noexcept
{
    return mLenghth1;
}
float MTriangle::lenghth2() const noexcept
{
    return mLenghth1;
}
float MTriangle::lenghth3() const noexcept
{
    return mLenghth1;
}
