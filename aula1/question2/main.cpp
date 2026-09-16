#include "point.hpp"
#include "segment.hpp"
#include "droite.hpp"
#include <iostream>

int main() {
    point::Point p1(0, 0); 
    point::Point p2(4, 4);
    point::Point p3(1, 1);
    point::Point p4(1, 2);
    
    segment::Segment s1(p1, p2);
    segment::Segment s2(p3, p4);    

    droite::Droite d1(s1);
    droite::Droite d2(p3, 0.785398); // 45 degrees in radians
}