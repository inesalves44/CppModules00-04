#include "Fixed.hpp"


int  main( void ) 
{ 
    /*Fixed  a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << "Main of the subject" << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;


    std::cout << Fixed::max( a, b ) << std::endl;*/

    std::cout << std::endl << "My tests:" << std::endl;
    Fixed c(6.03f);
    Fixed d(50);
    Fixed const f(0.05f);
    Fixed const e(1);

     std::cout << std::endl << "------Variables------" << std::endl;
    std::cout << "c : " << c << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;

    std::cout << std::endl << "------Comparison Operators------" << std::endl;
    std::cout << "d == c: " << (d == c) << std::endl;
    std::cout << "d != c: " << (d != c) << std::endl;
    std::cout << "e >= f: " << (e >= f) << std::endl;
    std::cout << "e <= f: " << (e <= f) << std::endl;
    std::cout << "d > c: " << (d > c) << std::endl;
    std::cout << "d < c: " << (d < c) << std::endl;

    std::cout << std::endl << "------Arithmetic Operators------" << std::endl;
    std::cout << "d + c: " << (d + c) << std::endl;
    std::cout << "e / f: " << (e / f) << std::endl;
    std::cout << "c - d: " << (c - d) << std::endl;
    std::cout << "f * d: " << (f * d) << std::endl;

    std::cout << std::endl << "------increment/decrement Operators------" << std::endl;
    std::cout << "d++: " << d++ << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "++c: " << ++c << std::endl;
    std::cout << "--c: " << --c << std::endl;
    std::cout << "d--: " << d-- << std::endl;
    std::cout << "d: " << d << std::endl;

    std::cout << std::endl << "------MIn and Max functions------" << std::endl;
    std::cout << "Max between c and d: " << Fixed::max(d, c) << std::endl;
    std::cout << "Min between c and d: " << Fixed::min(d, c) << std::endl;
    std::cout << "Max between e and f: " << Fixed::max(e, f) << std::endl;
    std::cout << "Min between e and f: " << Fixed::min(e, f) << std::endl;

    return 0;
}