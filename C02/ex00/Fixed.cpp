#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/**
 * @brief Construct a new Fixed:: Fixed object
 * Default constructor. fixed point = 0.
 */
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->number = 0;
}

/**
 * @brief Construct a new Fixed:: Fixed object 
 * copy constructor 
 * @param src -> reference to object to copy
 */
Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Fixed:: Fixed object
 * destructor
 */
Fixed::~Fixed()
{
	std::cout << "Destructor called"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**
 * @brief copy assigment operator
 * equals the fixed point to the parameter rhs
 * @param rhs 
 * @return Fixed& -> returs the reference
 */
Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->number = rhs.getRawBits();
	
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/**
 * @brief returns the value of the fixed point
 * @return int -> fixed point
 */
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->number;
}

/**
 * @brief sets the fixed point to the int passed as parameter
 * @param raw -> new int for the fixed point
 */
void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << "Value = " << i.getRawBits();
	return o;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */