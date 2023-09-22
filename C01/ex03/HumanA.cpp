#include "HumanA.h"

/**
 * @brief Construct a new Human A:: Human A object
 * using an initializer list because you need for the reference weapon
 * @param name -> name of the human
 * @param newWeapon -> type of the weapon
 */
HumanA::HumanA(std::string name, Weapon &newWeapon) : name(name), weapon(newWeapon)
{
    ;
}

/**
 * @brief attacks for Human A
 */
void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << "\n";
}

HumanA::~HumanA()
{
    
}