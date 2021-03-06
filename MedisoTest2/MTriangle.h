#pragma once

class MTriangle
{
public:
    MTriangle(float l1, float l2, float l3);

    bool isValid() const noexcept;
    float lenghth1() const noexcept;
    float lenghth2() const noexcept;
    float lenghth3() const noexcept;

private:
    const float mLenghth1; // lengths of sides 1, 2, and 3
    const float mLenghth2; // clockwise around
    const float mLenghth3; // the triangle
};
