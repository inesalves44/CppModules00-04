#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
	std::cout << "Copy constructor" << std::endl;
}

Ice::Ice( const Ice & src )
{
	this->type = src.type;
	std::cout << "Copy constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	std::cout << "Destructor" << std::endl;
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

// std::ostream &			operator<<( std::ostream & o, Ice const & i )
// {
// 	o << "Value = " << i.GetType();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

Ice* Ice::clone() const
{
	Ice *test = new Ice();

	return test;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */