#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int  main( void ) 
{ 
    Point   pointA;
    Point  pointB(1, 1);
    Point  pointC(2, 2);
    Point  point(0.5, 0.5);
    bool test = false;

    std::cout << "For the triangle with the points A(0,0) B(10 ,30) and C(20,0): " << std::endl;
    test = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10,15));
    std::cout << "Point: 10, 15 (inside): " << test << std::endl;
    test = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30,45));
    std::cout << "POint 30, 45(outside): " << test << std::endl;
    test = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(4,12));
    std::cout << "POint 4,12(line AB): " << test << std::endl;
    test = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(0,10));
    std::cout << "Point 0,10(line AC): " << test << std::endl;
    test = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(15,45));
    std::cout << "Point 15,45(line CB): " << test << std::endl;
    test = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10,3));
    std::cout << "Point 10,3( inside): " << test << std::endl;
    return 0;
}