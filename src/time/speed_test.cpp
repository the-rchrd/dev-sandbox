#include "speed_test.h"

using namespace ds;

SpeedTest::SpeedTest()
{
    std::cout << "{" << std::endl;
    time_pairs.resize(time_pairs.size() + 1);
    time_pairs[time_pairs.size() - 1].start = std::chrono::steady_clock::now();
}

void SpeedTest::count()
{
    time_pairs[time_pairs.size() - 1].end = std::chrono::steady_clock::now();
    time_pairs.resize(time_pairs.size() + 1);
    time_pairs[time_pairs.size() - 1].start = std::chrono::steady_clock::now();
}

void SpeedTest::clear() { time_pairs.clear(); }

void SpeedTest::print()
{
    for (int i = 0; i < time_pairs.size() - 1; i++)
    {
        auto diff = time_pairs[i].end - time_pairs[i].start;
        std::cout << "\n} ~execution time: " << std::setprecision(2) << std::chrono::duration<double, std::milli>(diff).count() << "ms~\n";
    }
}