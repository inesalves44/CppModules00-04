#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/**
 * @brief Construct a new Point:: Point object
 * initializes the x and y to zero
 */
Point::Point():x(0), y(0)
{

}

/**
 * @brief Construct a new Point:: Point object
 * initializes x and y to a and b
 * @param a 
 * @param b 
 */
Point::Point(float const a, float const b):x(a), y(b)
{

}

/**
 * @brief Construct a new Point:: Point object
 * assignes the object to src
 * @param src 
 */
Point::Point( const Point & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Point:: Point object
 */
Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**
 * @brief copy assigment operator
 * @param rhs 
 * @return Point& 
 */
Point &				Point::operator=( Point const & rhs )
{
	if ( this != &rhs )
	{
		(Fixed)this->x = rhs.x;
		(Fixed)this->y = rhs.y;
	}
	return *this;
}

/**
 * @brief output operator
 * @param o 
 * @param i 
 * @return std::ostream& 
 */
std::ostream &			operator<<( std::ostream & o, Point const & i )
{
	o << "Value X = " << i.presentX() << "Value Y = " << i.presentY();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

/**
 * @brief returns the fixed point x
 * @return Fixed 
 */
Fixed Point::presentX() const
{
	return (Fixed)this->x;
}

/**
 * @brief returns the fixed point y
 * @return Fixed 
 */
Fixed Point::presentY() const
{
	return (Fixed)this->y;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */