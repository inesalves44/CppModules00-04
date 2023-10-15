#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/**
 * @brief Construct a new Scav Trap:: Scav Trap object
 */
ScavTrap::ScavTrap() : ClapTrap()
{
	this->energyPoint = 50;
	this->hitPoints = 100;
	this->attackDamage = 20;
	std::cout << "Default constructor for ScavTrap" << std::endl;
}

/**
 * @brief Construct a new Scav Trap:: Scav Trap object
 * @param name -> name of the ScavTrap
 */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->energyPoint = 50;
	this->hitPoints = 100;
	this->attackDamage = 20;
	std::cout << "constructor for ScavTrap " << this->name << std::endl;
}

/**
 * @brief Construct a new Scav Trap:: Scav Trap object
 * @param src -> the object to copy
 */
ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
	this->energyPoint = 50;
	this->hitPoints = 100;
	this->attackDamage = 20;
	std::cout << "Copy constructor for ScavTrap " << this->name << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Scav Trap:: Scav Trap object
 */
ScavTrap::~ScavTrap()
{
	std::cout << "Default destructor for ScavTrap: " << this->name << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**
 * @brief overload operator.
 * @param rhs 
 * @return ScavTrap& 
 */
ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
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
 * @brief prints the object
 * @param o 
 * @param i 
 * @return std::ostream& 
 */
std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "-------------Presentation---------------" << std::endl;
	o << "ScavTrap:" << std::endl
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
 * @brief attack for the Scavtrap
 * @param target -> who he attacks
 */
void ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0 || this->energyPoint <= 0)
	{
		std::cout << this->name << "can't attack it has nothing left in it"<< std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "<< this->hitPoints 
	<< " points of damage!"<< std::endl;
	this->hitPoints = 0;
	this->energyPoint--;
}

/**
 * @brief the ScavTrap enters in guard gate mode
 */
void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */