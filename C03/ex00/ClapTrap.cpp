#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

/**
 * @brief Construct a new Clap Trap:: Clap Trap object
 * default constructor for claptrap
 */
ClapTrap::ClapTrap()
{
	this->name = "void";
	this->energyPoint = 10;
	this->hitPoints = 10;
	this->attackDamage = 0;
	std::cout << "Default ClapTrap constructor" << std::endl;
}

/**
 * @brief Construct a new Clap Trap:: Clap Trap object
 * @param newName - name of the claptrap
 */
ClapTrap::ClapTrap(std::string newName)
{
	this->name = newName;
	this->energyPoint = 10;
	this->hitPoints = 10;
	this->attackDamage = 0;
	std::cout << "constructor for ClapTrap: " << this->name << std::endl;
}

/**
 * @brief Construct a new Clap Trap:: Clap Trap object
 * @param src - object to copy
 */
ClapTrap::ClapTrap( const ClapTrap & src )
{
	this->name = src.name;
	this->energyPoint = src.energyPoint;
	this->hitPoints = src.hitPoints;
	this->attackDamage = src.attackDamage;
	std::cout << "Constructor copy for ClapTrap"<< std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

/**
 * @brief Destroy the Clap Trap:: Clap Trap object
 * destructor of the ClapTrap
 */
ClapTrap::~ClapTrap()
{
	std::cout << "Default detructor for ClapTrap: " << this->name << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/**
 * @brief assigment operator for clapTRap
 * @param rhs -> Claptrap to copy
 * @return ClapTrap& -> returns the object
 */
ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.name;
		this->energyPoint = rhs.energyPoint;
		this->hitPoints = rhs.hitPoints;
		this->attackDamage = rhs.attackDamage;
	}

	return *this;
}

/**
 * @brief print the object in o
 * @param o -> output stream
 * @param i -> object
 * @return std::ostream& print in o.s
 */
std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << "-------------Presentation---------------" << std::endl;
	o << "ClapTrap:" << std::endl
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
 * @brief attack of the ClapTrap causing some damage.
 * @param target -> target of the attack
 */
void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints <= 0 || this->energyPoint <= 0)
	{
		std::cout << this->name << " can't attack it has nothing left in him"<< std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "<< this->hitPoints 
	<< " points of damage!"<< std::endl;
	this->hitPoints = 0;
	this->energyPoint--;
}

/**
 * @brief when clap is attacked
 * @param amount -> amout of hitpoints 
 */
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " has been attacked by " << amount << " hit points!"<< std::endl;
	this->attackDamage += amount;
}

/**
 * @brief -> when ClapTrap repairs itself
 * @param amount -> amount to repair
 */
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

#pragma region printVariables
/**
 * @brief static function to get the name of the ClapTrap
 * @param i  -> object
 * @return std::string -> returns the name 
 */
std::string ClapTrap::getName(ClapTrap const &i) 
{
	return i.name;
}

int ClapTrap::getHitPoints(ClapTrap const &i) 
{
	return i.hitPoints;
}

int ClapTrap::getEnergyPoints(ClapTrap const &i) 
{
	return i.energyPoint;
}

int ClapTrap::getAttackDamage(ClapTrap const &i) 
{
	return i.attackDamage;
}
#pragma endregion
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */