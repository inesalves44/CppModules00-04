#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default dog constructor" << std::endl;
}

Dog::Dog( const Dog & src )
{
	this->type = src.type;
	std::cout << "Dog copy constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << "Animal Type:  " << i.getType() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
	std::cout << "Dog: wof wof" << std::endl;
}

void Dog::giveIdeas(std::string string)
{
	this->brain->getIdea(string);
}

void Dog::presentIdeas()
{
	std::cout << this->brain;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */