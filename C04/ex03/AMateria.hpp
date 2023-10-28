#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

#include "Character.hpp"
#include "ICharacter.hpp"


class ICharacter;

class AMateria
{

	public:

		AMateria();
		AMateria( AMateria const & src );
		AMateria(std::string const & type);
		virtual ~AMateria();

		AMateria &		operator=( AMateria const & rhs );

		std::string const & GetType() const;

		//purely virtual class
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;

	protected:
		
		std::string type;

};

std::ostream &			operator<<( std::ostream & o, AMateria const & i );

#endif /* ******************************************************** AMATERIA_H */