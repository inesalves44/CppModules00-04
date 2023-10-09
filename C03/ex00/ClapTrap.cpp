#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	this->name = "";
	this->energyPoint = 10;
	this->hitPoints = 10;
	this->attackDamage = 0;
	std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	this->name = newName;
	this->energyPoint = 10;
	this->hitPoints = 10;
	this->attackDamage = 0;
	std::cout << "constructor for " << this->name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
	std::cout << "constructor copy"<< std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Default detructor"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
		*this = rhs;

	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0 || this->energyPoint <= 0)
	{
		std::cout << this->name << "can't attack it has nothing left in him"<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "<< this->hitPoints 
	<< " points of damage!"<< std::endl;
	this->hitPoints = 0;
	this->energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " has been attacked by " << amount << " hit points!"<< std::endl;
	this->attackDamage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->energyPoint <= 0)
	{
		std::cout << this->name << " has no energy left"<< std::endl;
		return ;
	}
	this->energyPoint--;
	std::cout << this->name << " has repaired itself"<< std::endl;
	this->hitPoints += amount;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */