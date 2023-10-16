#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	this->type = "Cat";
	std::cout << "Default wrong cat constructor" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	this->type = src.type;
	std::cout << "Default wrong cat constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat Destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
{
	o << "Animal = " << i.getType() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound() const
{
	std::cout << "Cat: miau miau" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */