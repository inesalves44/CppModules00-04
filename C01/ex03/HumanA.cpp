#include "HumanA.h"

/**
 * @brief Construct a new HumanA:: Human A object
 * using an initializer list because you need for the reference weapon
 * @param name -> name of the human
 * @param newWeapon -> type of the weapon
 */
HumanA::HumanA(std::string name, Weapon &newWeapon) : name(name), weapon(newWeapon)
{
    std::cout << "Constructor for Human A\n";
}

/**
 * @brief attacks for Human A
 */
void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "Destructor for Human A\n";
}