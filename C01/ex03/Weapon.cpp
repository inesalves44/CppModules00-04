#include "Weapon.h"

Weapon::Weapon(std::string newtype)
{
    type = newtype;
}

Weapon::Weapon()
{
    ;
}

std::string Weapon::getType()
{
    return type;
}

void  Weapon::setType(std::string newtype)
{
    this->type = newtype;
}

Weapon::~Weapon()
{
}