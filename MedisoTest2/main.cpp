#include <iostream>
#include "MTriangle.h"

int main(int argc, char *argv[])
{
    int A = atof(argv[1]);
    int B = atof(argv[2]);
    int C = atof(argv[3]);

    auto triangle = MTriangle();
    bool result = triangle.setLengths(A, B, C);

    std::cout << "\nThe lengths you provided are: "<< A << ", " << B << " and " << C << ".\n\n"; 
    if (result)
    {
        std::cout << "A triangle is constructed with sides " << A << ", " << B << " and " << C << ".\n\n";
    }
    else
    {
        std::cout << "No triangle is constructed.\n";
    }
}