#include "HumanB.h"


HumanB::HumanB() : weapon(NULL)
{
    std::cout << "Default constructor for Human B\n";
}

/**
 * @brief Construct a new HumanB:: Human B object
 * initializer list for the properties
 * @param name -> of the human
 */
HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    std::cout << "Name constructor for Human B\n";;
}

/**
 * @brief sets the weapon of human B. 
 * @param newWeapon -> new weapon for human
 */
void HumanB::setWeapon(Weapon &newWeapon)
{
    weapon = &newWeapon;
}

/**
 * @brief attack for human B
 */
void HumanB::attack()
{
	if (!this->weapon)
	{
		std::cout << this->name << "does not have a weapon";
		return;
	}
    std::cout << this->name << " attacks with their " << weapon->getType() << "\n";
}

/**
 * @brief Destroy the Human B:: Human B object
 * nothing to delete 
 */
HumanB::~HumanB()
{
	std::cout << "Destructor for Human B\n";
}