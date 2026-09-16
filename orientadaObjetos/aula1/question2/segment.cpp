#include "segment.hpp"

segment::Segment(const Point p1, const Point p2) : p1(p1), p2(p2) {
}

segment::isInTheSegment(const Point p) const {
    float a;
    float b;

    a = (this->p2.y - this->p1.y) / (this->p2.x - this->p1.x);
    b = this->p1.y - a * this->p1.x;

    if (p.y == a * p.x + b) 
        return true;

    return false;
}

double orientation(double ax, double ay, double bx, double by, double cx, double cy) {
    return (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);
}

segment::isIntersecting(const Segment s) const {
    double o1 = orientation(this->p1.x, this->p1.y, this->p2.x, this->p2.y, s.p1.x, s.p1.y);
    double o2 = orientation(this->p1.x, this->p1.y, this->p2.x, this->p2.y, s.p2.x, s.p2.y);

    double o3 = orientation(s.p1.x, s.p1.y, s.p2.x, s.p2.y, this->p1.x, this->p1.y);
    double o4 = orientation(s.p1.x, s.p1.y, s.p2.x, s.p2.y, this->p2.x, this->p2.y);
    return (o1 * o2 < 0) && (o3 * o4 < 0);
}