#include "counter.hpp"

unsigned MyCounter::getCounter() const
{
    return counter;
}

unsigned MyCounter::getMax() const
{
    return max;
}

void MyCounter::increment()
{
    if (counter == max)
        counter = 0;
    else
        counter++;
}

void MyCounter::reset()
{
    counter = 0;
}

void MyCounter::set(unsigned value)
{
    counter = value;
}

void MyCounter::setMax(unsigned value)
{
    max = value;

    if (value > counter)
        counter = counter % max;
}

MyCounter::MyCounter() : counter(0), max(0)
{
}

MyCounter::MyCounter(unsigned theCounter, unsigned theMax)
    : counter(theCounter), max(theMax)
{
}

MyCounter::MyCounter(unsigned theMax)
    : counter(0), max(theMax)
{
}

MyCounter::MyCounter(const MyCounter& anotherCounter)
    : counter(anotherCounter.counter),
      max(anotherCounter.max)
{
}

MyCounter::~MyCounter()
{
}