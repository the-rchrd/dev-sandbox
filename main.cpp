#include <iostream>

#include "src/speed_test.h"

int main()
{
    ds::SpeedTest speed_test;

    std::cout << "Hello, World!" << std::endl;

    speed_test.count();
    speed_test.print();

    return 0;
}