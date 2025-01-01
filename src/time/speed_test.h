#pragma once

#include <iostream>
#include <chrono>
#include <vector>
#include <iomanip>

namespace ds
{
    typedef std::chrono::time_point<std::chrono::steady_clock> time;

    struct TimePair
    {
        time start, end;

        time difference() { return time(end - start); }
    };

    class SpeedTest
    {
    std::vector<TimePair> time_pairs;

    public:
        SpeedTest();

        void count();
        void clear();
        void print();
    };
}