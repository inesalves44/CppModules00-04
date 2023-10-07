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

    test = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(10,15));
    std::cout << "Valor para ponto 10, 15: " << test << std::endl;
    test = bsp(Point(0, 0), Point(10, 30), Point(20, 0), Point(30,45));
    std::cout << "Valor para ponto 30, 45: " << test << std::endl;

    return 0;
}