#include "Fixed.hpp"
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int  main( void ) 
{ 
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c(4);

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    std::cout << --c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c/a << std::endl;

    return 0;
}