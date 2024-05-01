#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	this->type = "empty";
	std::cout << "default const"<< std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	this->type = src.GetType();
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**
 * AMateria 
 * 
 * @param  {AMateria} const : 
 * @return {AMateria}       : 
 */
AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
		this->type = rhs.GetType();
	
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & i )
{
	o << "Value = " << i.GetType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string const & AMateria::GetType() const
{
	return this->type;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
