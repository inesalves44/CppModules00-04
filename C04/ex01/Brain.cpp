#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Constructor for brain" << std::endl;
}

Brain::Brain( const Brain & src )
{
	for (size_t i = 0; i < this->ideas->length(); i++)
	{
		this->ideas[i] = src.ideas[i];
	}
	
	std::cout << "Copy Constructor for brain" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Destructor for brain" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (size_t i = 0; i < this->ideas->length(); i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	o << "Brain Ideas: " << std::endl;
	for (size_t j = 0; j < i.getIdeasNumber(); j++)
	{
		o << i.getIdeaValue(j) << std::endl;
	}
	o << "End of Ideas" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

size_t Brain::getIdeasNumber() const
{
	return this->ideas->length();
}

std::string Brain::getIdeaValue(int i) const
{
	return this->ideas[i];
}

void	Brain::getIdea(std::string idea)
{
	int i = 0;
	
	while (i < this->ideas->length())
		i++;
	
	ideas[i] = idea;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */