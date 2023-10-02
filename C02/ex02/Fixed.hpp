#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
#include <cmath>

class Fixed
{

	public:

		Fixed();
		Fixed( Fixed const  & src );
		Fixed (float number);
		Fixed (int number);
		~Fixed();

		Fixed 		operator=( Fixed const & rhs );
		Fixed 		operator+( Fixed const & rhs );
		Fixed 		operator-( Fixed const & rhs );
		Fixed 		operator*( Fixed const & rhs );
		Fixed 	operator/( Fixed const & rhs );
		
		bool operator>(Fixed const &rhs);
		bool operator<(Fixed const &rhs);
		bool operator>=(Fixed const &rhs);
		bool operator<=(Fixed const &rhs);
		bool operator==(Fixed const &rhs);
		bool operator!=(Fixed const &rhs);

		Fixed  &operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		static Fixed min( Fixed &a, Fixed &b);
		static Fixed max( Fixed &a, Fixed &b);
		static Fixed min( Fixed const &a, Fixed const &b);
		static Fixed max( Fixed const &a, Fixed const &b);

	private:
		int fixedPoint;
		static const int fracBits = 8;
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */