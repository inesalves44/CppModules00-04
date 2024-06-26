#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		virtual ~Cure();

		Cure &		operator=( Cure const & rhs );

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

	private:

};

std::ostream &			operator<<( std::ostream & o, Cure const & i );

#endif
/* ************************************************************ CURE_H */

