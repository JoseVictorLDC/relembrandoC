#include "droite.hpp"

droite::Droite(const segment::Segment s) : p1(s.p1), p2(s.p2) {
}       
droite::Droite(const point::Point p1, float angle) : p1(p1) {
    this->p2.x = p1.x + cos(angle);
    this->p2.y = p1.y + sin(angle);
}
droite::Droite(const point::Point p1, const point::Point p2) : p1(p1), p2(p2) {
}
droite::isIntersectingDroite(const Droite d) const {
    segment::Segment s1(this->p1, this->p2);
    segment::Segment s2(d.p1, d.p2);
    return s1.isIntersecting(s2);
}
droite::isIntersectingSegment(const segment::Segment s) const {
    segment::Segment s1(this->p1, this->p2);
    return s1.isIntersecting(s);
}