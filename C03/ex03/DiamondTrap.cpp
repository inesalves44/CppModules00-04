#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap(std::string newName) : ClapTrap(newName + "_clapTrap"), ScavTrap(newName), FlagTrap(newName)
{
	this->name = newName;
	this->hitPoints = FlagTrap::hitPoints;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FlagTrap::attackDamage;

	std::cout << "Name Constructor for Diamond Trap " << this->name << std::endl;
}


DiamondTrap::DiamondTrap( const DiamondTrap & src ) : ClapTrap(src), ScavTrap(src), FlagTrap(src)
{
	this->name = src.name;
	std::cout << "Copy Constructor for Diamond Trap " << this->name << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor for Diamond Trap";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->FlagTrap::hitPoints = rhs.FlagTrap::hitPoints;
		this->ScavTrap::energyPoint = rhs.ScavTrap::energyPoint;
		this->FlagTrap::attackDamage = rhs.FlagTrap::attackDamage;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
{
	o << "DimondTrap = Name: " << ClapTrap::getName(i) << " Hit Points: " << ClapTrap::getHitPoints(i) 
	<< " Energy Points: " << ClapTrap::getEnergyPoints(i) << " Attack Damage: " << ClapTrap::getAttackDamage(i) << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


void DiamondTrap::whoAmI()
{
	std::cout << "DimondTrap name: " << this->name << std::endl << "ClapTrap name: " << ClapTrap::name << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */