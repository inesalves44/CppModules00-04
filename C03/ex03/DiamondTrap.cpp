#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/**
 * @brief Construct a new Diamond Trap:: Diamond Trap object
 * @param newName 
 */
DiamondTrap::DiamondTrap(std::string newName) : ClapTrap(newName + "_clapTrap"), FlagTrap(newName), ScavTrap(newName)
{
	this->name = newName;
	this->hitPoints = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;

	std::cout << "Name Constructor for Diamond Trap " << this->name << std::endl;
}

/**
 * @brief Construct a new Diamond Trap:: Diamond Trap object
 * @param src 
 */
DiamondTrap::DiamondTrap( const DiamondTrap & src ) : ClapTrap(src), ScavTrap(src), FlagTrap(src)
{
	this->name = src.name;
	std::cout << "Copy Constructor for Diamond Trap " << this->name << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Diamond Trap:: Diamond Trap object
 */
DiamondTrap::~DiamondTrap()
{
	std::cout << "Default Destructor for Diamond Trap " << this->name << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**
 * @brief compares and changes if different
 * @param rhs 
 * @return DiamondTrap& 
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
	o << "-------------Presentation---------------" << std::endl;

	o << "DimondTrap :" << std::endl
	<< "Name: " << ClapTrap::getName(i) << std::endl
	<< "Hit Points: " << ClapTrap::getHitPoints(i) << std::endl
	<< "Energy Points: " << ClapTrap::getEnergyPoints(i) << std::endl
	<< "Attack Damage: " << ClapTrap::getAttackDamage(i) << std::endl;

	o << "-------------------------------------" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

/**
 * @brief shows who is the clap trap
 * 
 */
void DiamondTrap::whoAmI()
{
	std::cout << "DimondTrap name: " << this->name << std::endl
	<< "ClapTrap name: " << ClapTrap::name << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */