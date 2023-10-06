#include "Point.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Point::Point():x(0), y(0)
{

}

Point::Point(float const a, float const b):x(a), y(b)
{

}

Point::Point( const Point & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Point::~Point()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
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

std::ostream &			operator<<( std::ostream & o, Point const & i )
{
	o << "Value X = " << i.presentX() << "Value Y =" << i.presentY();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Fixed Point::presentX() const
{
	return (Fixed)this->x;
}

Fixed Point::presentY () const
{
	return (Fixed)this->y;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */