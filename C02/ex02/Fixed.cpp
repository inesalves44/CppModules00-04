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
	this->fixedPoint = 0;
}

/**
 * @brief Construct a new Fixed:: Fixed object
 * @param src -> fixed object to 'copy'
 */
Fixed::Fixed( const Fixed & src )
{
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
	this->fixedPoint = roundf(number * (1 << this->fracBits));
}

/**
 * @brief Construct a new Fixed:: Fixed object
 * constructor for the int number parameter.
 * @param number -> integer to convert
 */
Fixed::Fixed(const int number)
{
	this->fixedPoint = number << this->fracBits;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Fixed:: Fixed object
 */
Fixed::~Fixed()
{
	//std::cout << "Destructor called"<< std::endl;
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
Fixed &   Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->fixedPoint = rhs.getRawBits();
	return *this;
}

#pragma region arithmetic operators 

/**
 * @brief adds two fixed point numbers
 * @param rhs -> to sum to an object
 * @return Fixed -> object
 */
Fixed  Fixed::operator+(Fixed const &rhs ) const
{
	Fixed temp(this->toFloat() + rhs.toFloat());

	return temp;
}

Fixed  Fixed::operator-(Fixed const &rhs ) const
{
	Fixed temp(this->toFloat() - rhs.toFloat());
	return temp;
}

Fixed  Fixed::operator*(Fixed const &rhs ) const
{
	Fixed temp(this->toFloat() * rhs.toFloat());
	return temp;
}

Fixed  Fixed::operator/(Fixed const &rhs ) const
{
	Fixed temp(this->toFloat() / rhs.toFloat());
	return temp;
}

#pragma endregion

#pragma region comparison operators

/**
 * @brief comprares the object passed as parameter to the this object.
 * @param rhs 
 * @return true -> if equal
 * @return false -> if they are not equal
 */
bool Fixed::operator==(Fixed rhs) const
{
	return this->toFloat() == rhs.toFloat();
}

bool Fixed::operator!=(Fixed rhs) const
{
	return this->toFloat() != rhs.toFloat();
}

bool Fixed::operator>=(Fixed rhs) const
{
	return this->toFloat() >= rhs.toFloat();
}

bool Fixed::operator<=(Fixed rhs) const
{
	return this->toFloat() <= rhs.toFloat();
}

bool Fixed::operator>(Fixed rhs)  const
{
	return this->toFloat() > rhs.toFloat();
}

bool Fixed::operator<(Fixed rhs) const
{
	return this->toFloat() < rhs.toFloat();
}
#pragma endregion

#pragma region increment/decrement operators

/**
 * @brief pre-increment operator
 * adds one to the object
 * @return Fixed& -> returns the object
 */
Fixed & Fixed::operator++(void) 
{
	++this->fixedPoint;
	return *this;
}

/**
 * @brief post-increment operator
 * adds one but returns before adding.
 * the post has an int as a parameter to be different
 * @return Fixed 
 */
Fixed Fixed::operator++(int) 
{
	Fixed temp(*this);
	++this->fixedPoint;
	return temp;
}


Fixed & Fixed::operator--(void) 
{
	if (this->fixedPoint - 1 > 0)
		--this->fixedPoint;
	return *this;
}

Fixed Fixed::operator--(int) 
{
	Fixed temp(*this);
	--this->fixedPoint;
	return temp;
}

#pragma endregion

/**
 * @brief overload of the insertion operator.
 * outputs the floating number to the putput stream
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

#pragma region min/max region

/**
 * @brief compares two fixed points and returns the smaller
 * @param a 
 * @param b 
 * @return Fixed& 
 */
Fixed &Fixed::min( Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	else
		return b;
}

Fixed &Fixed::max( Fixed &a, Fixed &b)
{
	if (a < b)
		return b;
	else
		return a;
}

const Fixed &Fixed::min( const Fixed  &a, const Fixed &b)
{
	if (a.fixedPoint < b.fixedPoint)
		return a;
	else
		return b;
}

const Fixed &Fixed::max( const Fixed  &a, const Fixed &b)
{
	if (a.fixedPoint < b.fixedPoint)
		return b;
	else
		return a;
}

#pragma endregion

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */