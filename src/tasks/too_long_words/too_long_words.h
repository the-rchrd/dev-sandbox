#pragma once

#include <fstream>

#include "../../time/speed_test.h"

namespace ds
{
    namespace tasks
    {
        namespace too_long_words
        {
            const void solution(const std::string path)
            {
                ds::SpeedTest speed_test;

                std::ifstream in(path);

                int n;
                in >> n;

                for (int i = 0; i < n; i++)
                {
                    std::string s = "";
                    in >> s;
                    
                    if (s.length() > 10)
                        std::cout << "\t" << s[0] << s.length() - 2 << s[s.length() - 1] << std::endl;
                    else
                        std::cout << "\t" << s << std::endl;
                }

                in.close();

                speed_test.count();
                speed_test.print();
            }
        }
    }
}