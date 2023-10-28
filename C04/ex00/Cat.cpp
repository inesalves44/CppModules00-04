#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/**
 * @brief Construct a new Cat:: Cat object
 * Default cat constructor
 */
Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default cat constructor" << std::endl;
}

/**
 * @brief Construct a new Cat:: Cat object
 * COPY CAT CONSTRUCTOR
 * @param src -> cat object to copy
 */
Cat::Cat( const Cat & src )
{
	this->type = src.type;
	std::cout << "copy cat constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Cat:: Cat object
 * cat destructor 
 */
Cat::~Cat()
{
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

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */