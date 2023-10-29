#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure( const Cure & src )
{
	this->type = src.type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{

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

std::ostream &			operator<<( std::ostream & o, Cure const & i )
{
	o << "Value = " << i.GetType();
	return o;
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