#include "HumanB.h"

/**
 * @brief Construct a new Human B:: Human B object
 * initializer list for the properties
 * @param name -> of the human
 */
HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    ;
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
    std::cout << name << " attacks with their " << weapon->getType() << "\n";
}

/**
 * @brief Destroy the Human B:: Human B object
 * nothing to delete 
 */
HumanB::~HumanB()
{

}