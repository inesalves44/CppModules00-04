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

Cat::Cat( const Cat & src ) : Animal(src)
{
	this->brain = new Brain(*src.brain);
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
		this->brain = rhs.brain;
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

/**
 * @brief this functions calls a function of the brain object in each cat.
 * @param string -> an idea to give to the cat 
 */
void Cat::giveIdeas(std::string string) const 
{
	this->brain->getIdea(string);
}

/**
 * @brief prints all the cats ideas.
 */
void Cat::presentIdeas() const
{
	std::cout << *this->brain;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */