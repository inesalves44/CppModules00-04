#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#ifndef INVENTORY
	#define INVENTORY 4
#endif

#ifndef FLOOR
	#define FLOOR 100
#endif

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

		std::string getValuesAMateria(bool isInventory, int index) const;
		int getFloorInventory() const;
		bool isEmpty(int indx);

	private:
		std::string name;
		AMateria *inventory[INVENTORY];
		AMateria *floor[FLOOR];
		int	floor_inventory;
};

std::ostream &			operator<<( std::ostream & o, Character const & i );
#endif
/* ******************************************************* CHARACTER_H */
