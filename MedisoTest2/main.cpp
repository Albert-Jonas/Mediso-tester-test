#include <iostream>
#include "MTriangle.h"

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        std::cerr << "Usage: " << argv[0] << " <length1> <length2> <length3>" << std::endl;
        return 1;
    }

    int A = atof(argv[1]);
    int B = atof(argv[2]);
    int C = atof(argv[3]);

    const MTriangle triangle(A, B, C);

    std::cout << "\nThe lengths you provided are: "<< A << ", " << B << " and " << C << ".\n\n";
    if (triangle.isValid())
    {
        std::cout << "A triangle is constructed with sides " << A << ", " << B << " and " << C << ".\n\n";
    }
    else
    {
        std::cout << "No triangle is constructed.\n";
    }

    return 0;
}
