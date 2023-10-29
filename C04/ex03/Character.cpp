#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	this->name = "TEST";
	
	for (size_t i = 0; i < INVENTORY; i++)
		this->inventory[i] = NULL;
	
	for (size_t i = 0; i < FLOOR; i++)
		this->floor[i] = NULL;
	
}

/**
 * Character::Character 
 * Constructor for Character, it receives the name and initializes 
 * floor and inventory as null
 * @param  {std::string} const : 
 */
Character::Character(std::string const name)
{
	this->name = name;
	
	for (size_t i = 0; i < INVENTORY; i++)
		this->inventory[i] = NULL;
	
	for (size_t i = 0; i < FLOOR; i++)
		this->floor[i] = NULL;
}

Character::Character( const Character & src )
{
	this->name = src.name;

	for(int i = 0; i < INVENTORY; i++)
		this->inventory[i] = src.inventory[i];

	for(int i = 0; i < FLOOR; i++)
		this->floor[i] = src.floor[i];
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
		for (size_t i = 0; i < INVENTORY; i++)
			this->inventory[i] = rhs.inventory[i];
		
		for (size_t i = 0; i < FLOOR; i++)
			this->floor[i] = rhs.floor[i];
		
	}
	return *this;
}



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
	
	if (i == INVENTORY)
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
	if (idx < 0 || idx >= INVENTORY)
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

	if ((idx < 0 || idx >= INVENTORY) && this->inventory[idx] != NULL)
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