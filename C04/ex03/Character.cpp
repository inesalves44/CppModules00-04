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
	this->floor_inventory = 0;
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
		
	this->floor_inventory = 0;
}

Character::Character( const Character & src )
{
	this->name = src.name;
	this->floor_inventory = src.getFloorInventory();

	for(int i = 0; i < INVENTORY; i++)
	{
		if (src.inventory[i] != NULL)
			this->inventory[i] = src.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}

	for(int i = 0; i < FLOOR; i++)
	{
		if (src.floor[i] != NULL)
			this->floor[i] = src.floor[i]->clone();
		else
			this->floor[i] = NULL;
	}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	for (size_t i = 0; i < INVENTORY; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
		
	for (int i = 0; i < FLOOR; i++)
	{
		if (this->floor[i] != NULL)
			delete this->floor[i];
	}
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
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
            this->inventory[i] = NULL;
		}
		
		for (size_t i = 0; i < FLOOR; i++)
		{
			if (this->floor[i] != NULL)
				delete this->floor[i];
            this->floor[i] = NULL;
		}

		for (size_t i = 0; i < INVENTORY; i++)
		{
			if (rhs.inventory[i] != NULL)
				this->inventory[i] = rhs.inventory[i]->clone();
		}
		for (int i = 0; i < FLOOR && this->floor[i] != NULL ; i++)
			this->floor[i] = rhs.floor[i]->clone();
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

	while (i < INVENTORY && this->inventory[i] != NULL)
		i++;
	if (i == INVENTORY)
	{
		std::cout << "Character is full the Materia cant insert!" << std::endl;
		delete m;
	}
	else
	{
		std::cout << "The new Materia " << m->GetType() <<  " is inserted in the slot " << i << std::endl;
		this->inventory[i] = m->clone();
		delete m;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INVENTORY)
	{
		std::cout << "index invalid!" << std::endl;
		return ;
	}
	
	if (this->isEmpty(idx))
		std::cout << "Empty slot" << std::endl;
	else
		this->inventory[idx]->use(target);
}

bool Character::isEmpty(int idx)
{
	if (idx < 0 || idx >= INVENTORY)
		return true;


	if (this->inventory[idx] != NULL)
		return false;
	else
		return true;
}

void Character::unequip(int index)
{
	int j = 0;


	if (index < 0 || index >= INVENTORY || this->inventory[index] == 0)
	{
		std::cout << "index invalid!" << std::endl;
		return ;
	}

	while (j < FLOOR && this->floor[j] != NULL)
		j++;
	
	if (j == FLOOR)
	{
		std::cout << "Floor is full cannot unequip"<< std::endl;
		return ;
	}
	this->floor_inventory++;
	this->floor[j] = this->inventory[index]->clone();
	delete this->inventory[index];
	this->inventory[index] = NULL;
	std::cout << "The Materia on index " << index <<  " is on the floor" << std::endl;
}

std::string Character::getValuesAMateria(bool isInventory, int index) const
{
	if (index >= 0 && index < INVENTORY)
		return "";

	if (isInventory)
	{
		if (this->inventory[index] != 0)
			return this->inventory[index]->GetType();
		else
			return "";
	}
	else
	{
		if (this->floor[index] != 0)
			return this->floor[index]->GetType();
		else
			return "";
	}
}

int Character::getFloorInventory() const
{
	return(this->floor_inventory);
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << "****** CHARACTER PRINTING ******\n";

	for (int j = 0; j < INVENTORY; j++)
		o << "Amateria in INVENTORY in index: " << j << " is:" << i.getValuesAMateria(true, j) << std::endl;
	
	o << std::endl;
	for (int j = 0; j < i.getFloorInventory(); j++)
		o << "Amateria in FLOOR in index: " << j << " is:" << i.getValuesAMateria(false, j) << std::endl;

	o << "****end character**** \n\033[1;37m";
	return o;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
