#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	this->type = "No one";
	std::cout << "Default animal constructor" << std::endl;
}

Animal::Animal( const Animal & src )
{
	this->type = src.getType();
	std::cout << "Animal copy constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Animal = " << i.getType() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	//std::cout << "This animal doesn't make sound" << std::endl;
}

void Animal::giveIdeas(std::string string) const
{
	
}

void Animal::presentIdeas() const 
{
	
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */