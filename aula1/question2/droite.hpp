#pragma once
#include "point.hpp"
#include "segment.hpp"

struct Droite
{
    Point p1, p2;
    
    Droite(const segment::Segment s);
    Droite(const point::Point p1, float angle);
    Droite(const point::Point p1, const point::Point p2);

    bool isIntersectingDroite(const Droite d) const;
    bool isIntersectingSegment(const segment::Segment s) const;
};