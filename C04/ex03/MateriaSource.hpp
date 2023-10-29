#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>

# include "IMateriaSource.hpp"

#ifndef NEW_INVENTORY
	#define NEW_INVENTORY 4
#endif

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

		void learnMateria(AMateria* test);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria* materias[NEW_INVENTORY];
};


#endif /* *************************************************** MATERIASOURCE_H */