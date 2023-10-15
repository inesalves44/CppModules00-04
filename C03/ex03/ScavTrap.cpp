#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	this->energyPoint = 50;
	this->hitPoints = 100;
	this->attackDamage = 20;
	std::cout << "Default constructor for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->energyPoint = 50;
	this->hitPoints = 100;
	this->attackDamage = 20;
	std::cout << "constructor for ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
	this->energyPoint = 50;
	this->hitPoints = 100;
	this->attackDamage = 20;
	std::cout << "Copy constructor for ScavTrap" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "Default destructor for ScavTrap" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
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

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "-------------Presentation---------------" << std::endl;

	o << "ScavTrap = Name: " << ClapTrap::getName(i) << std::endl
	<< " Hit Points: " << ClapTrap::getHitPoints(i) << std::endl
	<< " Energy Points: " << ClapTrap::getEnergyPoints(i) << std::endl
	<< " Attack Damage: " << ClapTrap::getAttackDamage(i) << std::endl;
	
	o << "-------------------------------------" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0 || this->energyPoint <= 0)
	{
		std::cout << this->name << "can't attack it has nothing left in him"<< std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "<< this->hitPoints 
	<< " points of damage!"<< std::endl;
	this->hitPoints = 0;
	this->energyPoint--;
}


void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */