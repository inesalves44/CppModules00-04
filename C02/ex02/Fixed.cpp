#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->fixedPoint = 0;
}

Fixed::Fixed( const Fixed & src )
{
	*this = src;
}

Fixed::Fixed(const float number)
{
	this->fixedPoint = number * (1 << this->fracBits);
}

Fixed::Fixed(const int number)
{
	this->fixedPoint = number << this->fracBits;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	//std::cout << "Destructor called"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed  Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->fixedPoint = rhs.getRawBits();
	return *this;
}

Fixed  Fixed::operator+(Fixed const &rhs )
{
	Fixed temp(this->toFloat() + rhs.toFloat());

	return temp;
}

Fixed  Fixed::operator-(Fixed const &rhs )
{
	Fixed temp(this->toFloat() - rhs.toFloat());
	return temp;
}

Fixed  Fixed::operator*(Fixed const &rhs )
{
	Fixed temp(this->toFloat() * rhs.toFloat());
	return temp;
}

Fixed  Fixed::operator/(Fixed const &rhs )
{
	Fixed temp(this->toFloat() / rhs.toFloat());
	return temp;
}

bool Fixed::operator==(Fixed const &rhs)
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(Fixed const &rhs)
{
	return this->toFloat() != rhs.toFloat();
}

bool Fixed::operator>=(Fixed const &rhs)
{
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(Fixed const &rhs)
{
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator>(Fixed const &rhs)
{
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator<(Fixed const &rhs)
{
	return this->toFloat() < rhs.toFloat();
}

Fixed & Fixed::operator++(void)
{
	this->fixedPoint++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	++this->fixedPoint;
	return temp;
}


Fixed Fixed::operator--(void)
{
	if (this->fixedPoint - 1 > 0)
		--this->fixedPoint;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPoint;
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = raw;
}

int Fixed::toInt( void ) const
{
	//std::cout << "toint member function called" << std::endl;
	return this->fixedPoint >> this->fracBits;
}

float Fixed::toFloat( void ) const
{
	//std::cout << "tofloat member function called" << std::endl;
	return this->fixedPoint / (1 << this->fracBits);
}

Fixed Fixed::min( Fixed &a, Fixed &b)
{
	if (a.fixedPoint < b.fixedPoint)
		return a;
	else
		return b;
}

Fixed Fixed::max( Fixed &a, Fixed &b)
{
	if (a.fixedPoint < b.fixedPoint)
		return b;
	else
		return a;
}

Fixed Fixed::min( Fixed const &a, Fixed const &b)
{
	if (a.fixedPoint < b.fixedPoint)
		return a;
	else
		return b;
}

Fixed Fixed::max( Fixed const &a, Fixed const &b)
{
	if (a.fixedPoint < b.fixedPoint)
		return b;
	else
		return a;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */