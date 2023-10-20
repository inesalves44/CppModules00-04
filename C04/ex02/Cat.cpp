#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Default cat constructor" << std::endl;
}

Cat::Cat( const Cat & src )
{
	this->type = src.type;
	this->brain = src.brain;
	std::cout << "Default cat constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << "Animal = " << i.getType() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
	std::cout << "Cat: miau miau" << std::endl;
}

void Cat::giveIdeas(std::string string) const 
{
	this->brain->getIdea(string);
}

void Cat::presentIdeas() const
{
	std::cout << *this->brain;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */