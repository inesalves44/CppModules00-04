#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/**
 * @brief Construct a new Fixed:: Fixed object
 * Default constructor init the fixedPoint = 0
 */
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

/**
 * @brief Construct a new Fixed:: Fixed object
 * @param src -> fixed object to 'copy'
 */
Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/**
 * @brief Construct a new Fixed:: Fixed object
 * constructor for parameter as float.
 * to create a fixed point you create a bitwise opeartion
 * @param number -> the float to convert
 */
Fixed::Fixed(const float number)
{
	std::cout << "float constructor called" << std::endl;
	this->fixedPoint = roundf(number * (1 << this->fracBits));
	
}

/**
 * @brief Construct a new Fixed:: Fixed object
 * constructor for the int number parameter.
 * @param number -> integer to convert
 */
Fixed::Fixed(const int number)
{
	std::cout << "int constructor called" << std::endl;
	this->fixedPoint = number * (1 << this->fracBits);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Fixed:: Fixed object
 */
Fixed::~Fixed()
{

	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**
 * @brief assigment operator.
 * equals the fixedPoint of the object using the getRawBits
 * @param rhs -> reference to copy
 * @return Fixed& -> the object
 */
Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->fixedPoint = rhs.getRawBits();

	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

/**
 * @brief overload of the insertion operator.
 * outputs the floating number to the output stream
 * @param o -> output
 * @param i -> fixed object
 * @return std::ostream& 
 */
std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
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
	return this->fixedPoint;
}

/**
 * @brief sets the fixed point to the int passed as parameter
 * @param raw -> new int for the fixed point
 */
void Fixed::setRawBits( int const raw )
{
	this->fixedPoint = raw;
}

/**
 * @brief transforms fixed point to integer
 * @return int -> the transformed value
 */
int Fixed::toInt( void ) const
{
	return this->fixedPoint >> this->fracBits;
}

/**
 * @brief transforms the fixedpoint to float
 * @return float -> the transformed value
 */
float Fixed::toFloat( void ) const
{
	return ((float)this->fixedPoint / (float)(1 << this->fracBits));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */