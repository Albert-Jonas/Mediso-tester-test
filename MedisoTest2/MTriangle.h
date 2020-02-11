#pragma once

class MTriangle
{
public:
    MTriangle()
        : mLenghth1(1.0)
        , mLenghth2(1.0)
        , mLenghth3(1.0) {}

    bool setLengths(float l1, float l2, float l3);
    float lenghth1();
    float lenghth2();
    float lenghth3();

private:
    float mLenghth1; // lengths of sides 1, 2, and 3
    float mLenghth2; // clockwise around
    float mLenghth3; // the triangle
};