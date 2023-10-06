#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{

	public:

		Point();
		Point(float const a, float const b);
		Point( Point const & src );
		~Point();

		Point &		operator=( Point const & rhs );
		Fixed presentX() const;
		Fixed presentY() const;

	private:
		Fixed const x;
		Fixed const y;

};

std::ostream &			operator<<( std::ostream & o, Point const & i );

#endif /* *********************************************************** POINT_H */