#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/**
 * @brief Construct a new Brain:: Brain object
 */
Brain::Brain()
{
	std::cout << "Constructor for brain" << std::endl;
	this->numIdeas = 0;
}

Brain::Brain( const Brain & src )
{
	for (size_t i = 0; i < src.getIdeasNumber(); i++)
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
		for (size_t i = 0; i < this->ideas->size(); i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

/**
 * @brief priints all the ideas.
 * @param o ->output stream
 * @param i -> object to print
 * @return std::ostream& 
 */
std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	o << "----------Brain Ideas -------------" << std::endl;
	for (int j = 0; j < i.getIdeasNumber(); j++)
	{
		o << i.getIdeaValue(j) << std::endl;
	}
	o << "----------End of Ideas-------------" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

/**
 * @brief get how many ideas the brain has.
 * @return int -> returns the number
 */
int Brain::getIdeasNumber() const
{
	return this->numIdeas;
}

/**
 * @brief returns the idea of the index passed as paramets
 * @param i -> index
 * @return std::string _>idea 
 */
std::string Brain::getIdeaValue(int i) const
{
	return this->ideas[i];
}

/**
 * @brief first checks if there are already 100 ideas
 * if not it adds the idea to the numideas space.
 * it also then adds one to the number of ideas
 * @param idea -> idea to give the animal
 */
void	Brain::getIdea(std::string idea)
{
	if (this->numIdeas > 100)
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