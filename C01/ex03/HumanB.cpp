#include "HumanB.h"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    ;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    *weapon = newWeapon;
}

void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << "\n";
}


HumanB::~HumanB()
{

}