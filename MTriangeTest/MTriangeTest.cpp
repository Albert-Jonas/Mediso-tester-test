// MTriangeTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "MTriangle.h"
#include "gtest.h"

TEST(MTriangleTest, allZeros)
{
    const MTriangle triangle = MTriangle(0, 0, 0);

    EXPECT_FALSE(triangle.isValid());
    EXPECT_EQ(0, triangle.lenghth1());
    EXPECT_EQ(0, triangle.lenghth2());
    EXPECT_EQ(0, triangle.lenghth3());
}