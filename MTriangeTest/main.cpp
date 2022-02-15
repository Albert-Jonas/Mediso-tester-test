#include "pch.h"
#include "gtest.h"

using namespace std;

int main(int argc, char * argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    // Call all tests ->
    int iret = RUN_ALL_TESTS();
    cout << "result ->" << iret << endl;
    return 0;
}