#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Constructor for brain" << std::endl;
	this->numIdeas = 0;
}

Brain::Brain( const Brain & src )
{
	this->numIdeas = 0;
	for (size_t i = 0; i < src.getIdeasNumber(); i++)
	{
		this->ideas[i] = src.getIdeaValue(i);
		this->numIdeas++;
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
		this->numIdeas = 0;
		for (size_t i = 0; i < this->ideas->size(); i++)
		{
			this->ideas[i] = rhs.ideas[i];
			this->numIdeas++;
		}
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	o << "------------------Brain Ideas: ------------------" << std::endl;
	for (int j = 0; j < i.getIdeasNumber(); j++)
	{
		o << i.getIdeaValue(j) << std::endl;
	}
	o << "------------------End of Ideas------------------" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Brain::getIdeasNumber() const
{
	return this->numIdeas;
}

std::string Brain::getIdeaValue(int i) const
{
	return this->ideas[i];
}

void	Brain::getIdea(std::string idea)
{
	if (this->numIdeas >= 100)
	{
		std::cout << "Can't have more ideas" << std::endl;
		return ;
	}

	ideas[this->numIdeas] = idea;
	this->numIdeas++;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */