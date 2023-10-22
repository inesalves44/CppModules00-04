#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{

	public:

		Character();
		Character(std::string const name);
		Character( Character const & src );
		virtual ~Character();

		Character &		operator=( Character const & rhs );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		std::string name;
		AMateria *inventory[4];
		AMateria *floor[100];
};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */