#pragma once
#include "point.hpp"

struct Segment {
    Point p1, p2;

    Segment(const Point p1, const Point p2);

    bool isInTheSegment(const Point p) const;
    bool isIntersecting(const Segment s) const;
};