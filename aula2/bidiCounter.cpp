#include "bidiCounter.hpp"
#include <iostream>

MyBiDiCounter::MyBiDiCounter() : MyCounter()
{
}

MyBiDiCounter::MyBiDiCounter(unsigned theCounter, unsigned theMax)
    : MyCounter(theCounter, theMax)
{
}   

MyBiDiCounter::MyBiDiCounter(unsigned theMax)
    : MyCounter(theMax)
{
}   

MyBiDiCounter::MyBiDiCounter(const MyBiDiCounter& anotherCounter)
    : MyCounter(anotherCounter)
{
}  

void MyBiDiCounter::decrement()
{
    if(counter > 0)
        counter--;
    else
        counter = max;
}

void MyBiDiCounter::increment(unsigned value)
{
    if(counter + value <= max)
        counter = counter + value
    else
        counter = (counter + value) % max
}

void MyBiDiCounter::print() const
{
    std::cout << "Counter: " << counter << " Max: " << max << std::endl;
}