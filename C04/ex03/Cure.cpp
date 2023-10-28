#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
	std::cout << "Constructor cure" << std::endl;
}

Cure::Cure( const Cure & src )
{
	this->type = src.type;
	std::cout << "Copy Constructor cure" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "Destructor cure" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.GetType();
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

/**
 * @brief clone a cure
 * @return AMateria* 
 */
AMateria* Cure::clone() const
{
	AMateria *test = new Cure();

	return test;
}

/**
 * @brief THIS IS THE OBJECTIVE OF CURE MATERIA
 * 
 * @param target 
 */
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */