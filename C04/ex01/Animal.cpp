#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
/**
 * @brief Construct a new Animal:: Animal object
 * Default constructor
 */
Animal::Animal()
{
	this->type = "No one";
	std::cout << "Default animal constructor" << std::endl;
}

/**
 * @brief Construct a new Animal:: Animal object
 * Copy constructor
 * @param src 
 */
Animal::Animal( const Animal & src )
{
	this->type = src.getType();
	std::cout << "Animal copy constructor" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Animal:: Animal object
 * destructor for animal
 */
Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**
 * @brief overload operator
 * if the object is different it changes to the object passed as parameter
 * @param rhs -> animal to copy
 * @return Animal& -> this object
 */
Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

/**
 * @brief print the type of animal
 * @param o -> output stream
 * @param i -> parameter to print
 * @return std::ostream& 
 */
std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Animal = " << i.getType() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

/**
 * @brief returns the animal types
 * @return std::string 
 */
std::string Animal::getType() const
{
	return this->type;
}

/**
 * @brief makes a sound of the animal
 */
void Animal::makeSound() const
{
	std::cout << "This animal doesn't make sound" << std::endl;
}

/**
 * @brief 
 * This functions is on Dog and Cat class
 * @param string 
 */
void Animal::giveIdeas(std::string string) const
{
	
}

/**
 * @brief 
 * This functions is on Dog and Cat class
 */
void Animal::presentIdeas() const 
{
	
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */