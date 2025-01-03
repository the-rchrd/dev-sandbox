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

    class ITime
    {
        public:
            virtual ~ITime() {};

            virtual void count() = 0;
            virtual void clear() = 0;
            virtual void print() const = 0;
    };

    class SpeedTest : public ITime
    {
        mutable std::vector<TimePair> time_pairs;

        public:
            SpeedTest()
            {
                std::cout << "{" << std::endl;
                time_pairs.resize(time_pairs.size() + 1);
                time_pairs[time_pairs.size() - 1].start = std::chrono::steady_clock::now();
            }

            void count()
            {
                time_pairs[time_pairs.size() - 1].end = std::chrono::steady_clock::now();
                time_pairs.resize(time_pairs.size() + 1);
                time_pairs[time_pairs.size() - 1].start = std::chrono::steady_clock::now();
            }

            void clear() { time_pairs.clear(); }
            
            void print() const
            {
                for (int i = 0; i < (int) time_pairs.size() - 1; i++)
                {
                    auto diff = time_pairs[i].end - time_pairs[i].start;
                    std::cout << "\n} ~execution time: " << std::setprecision(2) << std::chrono::duration<double, std::milli>(diff).count() << "ms~\n";
                }
            }
    };
}
