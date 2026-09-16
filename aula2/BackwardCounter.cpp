#include "BackwardCounter.hpp"

BackwardCounter::BackwardCounter() {
    counter = 0;
    max = 0;
}
BackwardCounter::BackwardCounter(unsigned theCounter, unsigned theMax) {
    counter = theCounter;
    max = theMax;
}
BackwardCounter::BackwardCounter(unsigned theMax) {
    counter = 0;
    max = theMax;
}
BackwardCounter::BackwardCounter(const BackwardCounter& anotherCounter) {
    counter = anotherCounter.counter;
    max = anotherCounter.max;
}
void BackwardCounter::decrement() {
    if (counter > 0) {
        counter--;
    }
}
void BackwardCounter::print() const {
    std::cout << "Counter: " << counter << ", Max: " << max << std::endl;
}