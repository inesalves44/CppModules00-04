#include "HumanA.h"

/**
 * @brief Construct a new Human A:: Human A object
 * 
 * @param name - name oz the zombie
 * @param newWeapon - weapon of the zombie
 */
HumanA::HumanA(std::string name, Weapon &newWeapon) : name(name), weapon(newWeapon)
{
    ;
}

/**
 * @brief zombie attack
 */
void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << "\n";
}

HumanA::~HumanA()
{
}