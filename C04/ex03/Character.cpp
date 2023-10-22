#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	this->name = "TEST";
	
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	
	for (size_t i = 0; i < 100; i++)
		this->floor[i] = NULL;
	
}

Character::Character(std::string const name)
{
	this->name = name;
	
	for (size_t i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	
	for (size_t i = 0; i < 100; i++)
		this->floor[i] = NULL;
}

Character::Character( const Character & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (size_t i = 0; this->inventory[i] != NULL; i++)
		delete this->inventory[i];
	
	for (size_t i = 0; this->floor[i] != NULL ; i++)
		delete this->floor[i];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		for (size_t i = 0; i < 4; i++)
			this->inventory[i] = rhs.inventory[i];
		
		for (size_t i = 0; i < 100; i++)
			this->floor[i] = rhs.floor[i];
		
	}
	return *this;
}

/*std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << "Name = " << i.getName();
	for (size_t i = 0; this->inventory[i] != NULL; i++)
	{
		
	}
	
	return o;
}
*/


/*
** --------------------------------- METHODS ----------------------------------
*/
std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	int i = 0;
	int j = 0;

	while (this->inventory[i] != NULL)
		i++;
	
	if (i == 4)
	{
		std::cout << "Character is full the Materia is on the floor" << std::endl;
		while (this->floor[j] != NULL)
			j++;
		this->floor[j] = m;
	}
	else
	{
		std::cout << "The new Materia is inserted in the slot " << i << std::endl;
		this->inventory[i] = m;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "index invalid!" << std::endl;
		return ;
	}

	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
	else
		std::cout << "Empty slot" << std::endl;
}

void Character::unequip(int idx)
{
	int j = 0;

	if (idx < 0 || idx >= 4)
	{
		std::cout << "index invalid!" << std::endl;
		return ;
	}

	while (this->floor[j] != NULL)
		j++;
	
	this->floor[j] = this->inventory[idx];
	this->inventory[idx] = NULL;

	std::cout << "The Materia on index " << idx <<  "is on the floor" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */