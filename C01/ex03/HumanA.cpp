#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &newWeapon) : name(name), weapon(newWeapon)
{
    ;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << "\n";
}

HumanA::~HumanA()
{
    
}