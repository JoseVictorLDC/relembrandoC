#pragma once

struct MyCounter
{
    unsigned counter;
    unsigned max;
    
    ~MyCounter();
   
    unsigned getCounter() const;
    unsigned getMax() const;
    void increment();
    void reset();
    
    void set(unsigned value);
    void setMax(unsigned value);
};