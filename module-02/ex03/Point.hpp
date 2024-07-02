#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point
{

public:
    Point();
    Point(const Point& src);
    Point(const float x, const float y);
    ~Point();
    Point& operator=(const Point& src);
    Fixed getX();
    Fixed getY();

private:
    const Fixed m_x;
    const Fixed m_y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
