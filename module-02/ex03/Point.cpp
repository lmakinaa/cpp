#include "Point.hpp"

Point::Point() // init members here
    : m_x (0)
    , m_y (0)
{
    // default constructor
}

Point::Point(const float x, const float y)
    : m_x (x)
    , m_y (y)
{
    // (copy constructor) init or assign members here
}

Point::Point(const Point& src)
    : m_x (src.m_x)
    , m_y (src.m_y)
{
}

Point& Point::operator=(const Point& src)
{
    (void) src;
    return *this;
}

Point::~Point()
{
    // default destructor
}

Fixed Point::getX()
{
    return (m_x);
}

Fixed Point::getY()
{
    return (m_y);
}

