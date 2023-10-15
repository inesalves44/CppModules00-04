#include "FlagTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/**
 * @brief Construct a new Flag Trap:: Flag Trap object
 */
FlagTrap::FlagTrap() : ClapTrap()
{
	this->energyPoint = 100;
	this->hitPoints = 100;
	this->attackDamage = 30;
	std::cout << "Default constructor for FlagTrap" << std::endl;
}

/**
 * @brief Construct a new Flag Trap:: Flag Trap object
 * @param name -> name of the FlagTrap
 */
FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	this->energyPoint = 100;
	this->hitPoints = 100;
	this->attackDamage = 30;
	std::cout << "constructor for FlagTrap " << this->name << std::endl;
}

/**
 * @brief Construct a new Flag Trap:: Flag Trap object
 * @param src 
 */
FlagTrap::FlagTrap( const FlagTrap & src ) : ClapTrap(src)
{
	this->energyPoint = 100;
	this->hitPoints = 100;
	this->attackDamage = 30;
	std::cout << "Copy constructor for FlagTrap " << this->name << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Flag Trap:: Flag Trap object
 */
FlagTrap::~FlagTrap()
{
	std::cout << "Default destructor for FlagTrap" << this->name << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**
 * @brief overload operator equal
 * @param rhs -> object to compare and copy
 * @return FlagTrap& 
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

/**
 * @brief overload operator to print
 * @param o 
 * @param i 
 * @return std::ostream& 
 */
std::ostream &			operator<<( std::ostream & o, FlagTrap const & i )
{
	o << "-------------Presentation---------------" << std::endl;
	o << "FlagTrap:" << std::endl
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
 * @brief give highfives
 */
void FlagTrap::highFivesGuys(void)
{
	std::cout << "High five to all from " << this->name  << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */