#pragma once

#include <fstream>

#include "../../time/speed_test.hpp"

namespace ds
{
    namespace tasks
    {
        namespace watermelon
        {
            static void solution(const std::string path)
            {
                ds::SpeedTest speed_test;

                std::ifstream in(path);

                short w;
                in >> w;

                if (w != 1 && w != 2 && w != 3
                    && (w - 2) % 2 == 0)
                {
                    std::cout << "\t~2 & " << w - 2 << "~" << std::endl;
                    std::cout << "\tYES" << std::endl;
                }
                else
                {
                    std::cout << "\t~2 & " << w - 2 << "~" << std::endl;
                    std::cout << "\tNO" << std::endl;
                }

                in.close();

                speed_test.count();
                speed_test.print();
            }
        }
    }
}
