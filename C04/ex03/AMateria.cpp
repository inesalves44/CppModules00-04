#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	std::cout << "Default constructor AMateria" << std::endl;
}

AMateria::AMateria( const AMateria & src )
{
	this->type = src.type;
	std::cout << "Copy Constructor AMateria" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "Constructor with type AMateria" << std::endl;
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "Destructor AMateria" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.GetType();
	}
	std::cout << "=operator" << std::endl;
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