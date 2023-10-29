#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		this->materias[i] = NULL;	
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for (size_t i = 0; i < NEW_INVENTORY; i++)
		this->materias[i] = src.materias[i];
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; this->materias[i] != NULL; i++)
	{
		delete this->materias[i];
	}
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if ( this != &rhs )
	{
		for(int i = 0;  i < NEW_INVENTORY; i++)
			this->materias[i] = rhs.materias[i];
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria* test)
{
	int i = 0;

	while (this->materias[i] != NULL)
		i++;
	
	if(i == 4)
	{
		std::cout << "No space to copy " << std::endl;
		return ;
	}

	this->materias[i] = test;
}


AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (this->materias[i] != NULL)
	{
		if (this->materias[i]->GetType() == type)
			return this->materias[i]->clone();
		i++;
	}
	
	return 0;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */