#pragma once

#include <iostream>
#include <chrono>
#include <vector>
#include <iomanip>

#include "../interfaces/i_time.hpp"

namespace ds
{
    typedef std::chrono::time_point<std::chrono::steady_clock> time;

    struct TimePair
    {
        time start, end;

        time difference() { return time(end - start); }
    };

    class SpeedTest : public ITime
    {
        mutable std::vector<TimePair> time_pairs;

        public:
            SpeedTest();

            void count();
            void clear();
            void print() const;
    };
}
