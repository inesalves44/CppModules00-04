#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < NEW_INVENTORY; i++)
		this->materias[i] = NULL;	
}

MateriaSource::MateriaSource( const MateriaSource & src )
{

	for (size_t i = 0; i < NEW_INVENTORY; i++)
		this->materias[i] = src.materias[i]->clone();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < NEW_INVENTORY && this->materias[i] != NULL; i++)
		delete this->materias[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{

	if ( this != &rhs )
	{
		for(int i = 0;  i < NEW_INVENTORY; i++)
		{
			if (this->materias[i] != NULL)
				delete this->materias[i];
			this->materias[i] = rhs.materias[i]->clone();
		}
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* test)
{
	int i = 0;

	while (i < NEW_INVENTORY && this->materias[i] != NULL)
		i++;
	
	if(i == NEW_INVENTORY)
	{
		std::cout << "No space to copy " << std::endl;
		delete test;
		return ;
	}

	this->materias[i] = test;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < NEW_INVENTORY && this->materias[i] != NULL)
	{
		if (this->materias[i]->GetType() == type)
			return this->materias[i]->clone();
		i++;
	}
	std::cout << "type of materia does not exist" << std::endl;
	return 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
