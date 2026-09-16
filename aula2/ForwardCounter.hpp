#ifndef BIDICOUNTER_HPP
#define BIDICOUNTER_HPP

#include "counter.hpp"

class ForwardCounter : public MyCounter
{
public:
    ForwardCounter();
    ForwardCounter(unsigned theCounter, unsigned theMax);
    ForwardCounter(unsigned theMax);
    ForwardCounter(const ForwardCounter& anotherCounter);

    void incrementForward();
    void print() const;
};

#endif