#ifndef MYCOUNTER_HPP
#define MYCOUNTER_HPP
 
#include<iostream>
 
class MyCounter
{
protected:
    unsigned counter;
    unsigned max;
 
public:
    unsigned getCounter() const; 
    unsigned getMax() const;
    
    void increment();
    void reset();
    void set(unsigned value);
    void setMax(unsigned value); 

    MyCounter();
    MyCounter(unsigned theCounter, unsigned theMax);
    explicit MyCounter(unsigned theMax);
    MyCounter(const MyCounter& anotherCounter);
    
    ~MyCounter();
};
#endif