#ifndef BIDICOUNTER_HPP
#define BIDICOUNTER_HPP

#include "counter.hpp"

class BackwardCounter : public MyCounter
{
public:
    BackwardCounter();
    BackwardCounter(unsigned theCounter, unsigned theMax);
    BackwardCounter(unsigned theMax);
    BackwardCounter(const BackwardCounter& anotherCounter);

    void decrement();
    void print() const;
};

#endif