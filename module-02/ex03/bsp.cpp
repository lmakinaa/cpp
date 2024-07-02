#include "Point.hpp"

// the determinant: ( (x1 * y2) + (x2 * y3) + (x3 * y1) ) + ( (y2 * x3) + (y3 * x1) + (y1 * x2) )
// = x1(y2−y3) + x2(y3−y1) + x3(y1−y2)
Fixed triangleArea(Point a, Point b, Point c)
{
    Fixed determinant = (
                              ( a.getX() * (b.getY() - c.getY()) )
                            + ( b.getX() * (c.getY() - a.getY()) )
                            + ( c.getX() * (a.getY() - b.getY()) )
                        );
    return (determinant.getAbs() / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed areaABC = triangleArea(a, b, c);
    Fixed areaPBC = triangleArea(point, b, c);
    Fixed areaAPC = triangleArea(a, point, c);
    Fixed areaABP = triangleArea(a, b, point);
    return (areaABC == areaPBC + areaAPC + areaABP);
}
