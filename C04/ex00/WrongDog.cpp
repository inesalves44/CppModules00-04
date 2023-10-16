#include "WrongDog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongDog::WrongDog()
{
	this->type = "Dog";
	std::cout << "Default dog constructor" << std::endl;
}

WrongDog::WrongDog( const WrongDog & src )
{
	this->type = src.type;
	std::cout << "Dog copy constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongDog::~WrongDog()
{
	std::cout << "Dog destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongDog &				WrongDog::operator=( WrongDog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}

	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongDog const & i )
{
	o << "Animal Type:  " << i.getType() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongDog::makeSound() const
{
	std::cout << "Dog: wof wof" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */