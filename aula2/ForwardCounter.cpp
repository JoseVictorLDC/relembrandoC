#include "ForwardCounter.hpp"

ForwardCounter::ForwardCounter() {
    counter = 0;
    max = 0;
}
ForwardCounter::ForwardCounter(unsigned theCounter, unsigned theMax) {
    counter = theCounter;
    max = theMax;
}
ForwardCounter::ForwardCounter(unsigned theMax) {
    counter = 0;
    max = theMax;
}   
ForwardCounter::ForwardCounter(const ForwardCounter& anotherCounter) {
    counter = anotherCounter.counter;
    max = anotherCounter.max;
}
void ForwardCounter::incrementForward() {
    if (counter < max) {
        counter++;
    }
}
void ForwardCounter::print() const {
    std::cout << "Counter: " << counter << ", Max: " << max << std::endl;
}