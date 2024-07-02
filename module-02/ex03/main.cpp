#include "Point.hpp"

// todo: there is error on test

int main( void )
{
    
    Point a(2.97,2.99);
    Point b(-3.69,10.25);
    Point c(-0.68,10.38);
    Point point(-2.34, 9.59);
    std::cout << std::boolalpha;
    std::cout << bsp(a, b, c, point) << '\n';


    Point a1(2.97,2.99);
    Point b1(-3.69,10.25);
    Point c1(-0.68,10.38);
    Point point1(-0.68,6.97);
    std::cout << bsp(a1, b1, c1, point1) << '\n';

    
    Point a2(2.97,2.99);
    Point b2(-3.69,10.25);
    Point c2(-0.68,10.38);
    Point point2(-1.22, 7.07);
    std::cout << bsp(a2, b2, c2, point2) << '\n';

    return 0;
}
