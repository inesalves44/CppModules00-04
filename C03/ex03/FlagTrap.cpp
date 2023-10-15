#include "FlagTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FlagTrap::FlagTrap() : ClapTrap()
{
	this->energyPoint = 100;
	this->hitPoints = 100;
	this->attackDamage = 30;
	std::cout << "Default constructor for FlagTrap" << std::endl;
}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	this->energyPoint = 100;
	this->hitPoints = 100;
	this->attackDamage = 30;
	std::cout << "Constructor for FlagTrap" << std::endl;
}

FlagTrap::FlagTrap( const FlagTrap & src ) : ClapTrap(src)
{
	this->energyPoint = 100;
	this->hitPoints = 100;
	this->attackDamage = 30;
	std::cout << "Copy constructor for FlagTrap" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FlagTrap::~FlagTrap()
{
	std::cout << "Default destructor for FlagTrap" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FlagTrap &				FlagTrap::operator=( FlagTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoint = rhs.energyPoint;
		this->attackDamage = rhs.attackDamage;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FlagTrap const & i )
{
	o << "-------------Presentation---------------" << std::endl;
	
	o << "FlagTrap = Name: " << ClapTrap::getName(i) << std::endl
	<< " Hit Points: " << ClapTrap::getHitPoints(i) << std::endl
	<< " Energy Points: " << ClapTrap::getEnergyPoints(i) << std::endl
	<< " Attack Damage: " << ClapTrap::getAttackDamage(i) 
	<< std::endl;
	
	o << "-------------------------------------" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void FlagTrap::highFivesGuys(void)
{
	std::cout << "High five to all" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */