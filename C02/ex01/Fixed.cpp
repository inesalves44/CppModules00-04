#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(float number)
{
	std::cout << "Copy float constructor called" << std::endl;
	this->fixedPoint = number * (1 << this->fracBits);
}

Fixed::Fixed(const int number)
{
	std::cout << "Copy int constructor called" << std::endl;
	this->fixedPoint = number * (1 << this->fracBits);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	//std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

int Fixed::toInt( void ) const
{
	std::cout << "toint member function called" << std::endl;
	return 0;
}

float Fixed::toFloat( void ) const
{
	std::cout << "tofloat member function called" << std::endl;
	return 0;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */