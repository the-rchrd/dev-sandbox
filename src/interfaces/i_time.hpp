#pragma once

#include <string>

class ITime
{
    public:
        virtual ~ITime() {};

        virtual void count() = 0;
        virtual void clear() = 0;
        virtual void print() const = 0;
};
