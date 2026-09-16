#ifndef BIDICOUNTER_HPP
#define BIDICOUNTER_HPP

#include "counter.hpp"

class MyBiDiCounter : public MyCounter
{
public:
    MyBiDiCounter();;
    MyBiDiCounter(unsigned theCounter, unsigned theMax);
    MyBiDiCounter(unsigned theMax);
    MyBiDiCounter(const MyBiDiCounter& anotherCounter);

    void decrement();
    void increment(unsigned value);
    void print() const;
};

#endif