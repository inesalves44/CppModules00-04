#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include <string>

#include "AMateria.hpp"

class AMateria;

/**
 * @brief interface for character virtual class
 */
class ICharacter
{

	public:

		virtual ~ICharacter() {};

		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	private:

};


#endif 
/* ****************************************************** ICHARACTER_H */
