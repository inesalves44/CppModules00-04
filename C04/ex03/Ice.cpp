#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
	std::cout << "Constructor Ice" << std::endl;
}

Ice::Ice( const Ice & src )
{
	this->type = src.type;
	std::cout << "Copy constructor Ice" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	std::cout << "Destructor ice" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}




/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria* Ice::clone() const
{
	AMateria *test = new Ice();

	return test;
}

/**
 * @brief object of ice
 * @param target 
 */
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */