#include "Fixed.hpp"
#include "Point.hpp"

int  main( void ) 
{ 
    Point const  a;
    Point const b(1, 1);
    Point const c(2, 2);
    Point const p(0.5, 0.5);
    bool test = false;

    bsp(a, b, c, p);
    std::cout << test;
    return 0;
}