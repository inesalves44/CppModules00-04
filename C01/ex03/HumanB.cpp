#include "HumanB.h"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    weapon = newWeapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << "\n";
}


HumanB::~HumanB()
{

}