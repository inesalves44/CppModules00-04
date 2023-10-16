#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	this->type = "No one";
	std::cout << "Default wrong animal constructor" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	this->type = src.getType();
	std::cout << "Animal copy constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "Animal = " << i.getType() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "This animal doesn't make sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */