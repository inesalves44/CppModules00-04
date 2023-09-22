#include "Weapon.h"

/**
 * @brief Construct a new Weapon:: Weapon object
 * it defines the type ofthe weapon
 * @param newtype -> defines a weapon
 */
Weapon::Weapon(std::string newtype)
{
    type = newtype;
}

/**
 * @brief Construct a new Weapon:: Weapon object
 * A constructor for when I dont initialize the weapon.
 */
Weapon::Weapon()
{
    ;
}

/**
 * @brief returns the object weapon.
 * @return std::string -> returns the string that is the weapon
 */
std::string Weapon::getType()
{
    return type;
}

/**
 * @brief sets the new wepon
 * @param newtype -> receives a new weapon as a parameter.
 */
void  Weapon::setType(std::string newtype)
{
    this->type = newtype;
}

/**
 * @brief Destroy the Weapon:: Weapon object
 * Nothing to destroy
 */
Weapon::~Weapon()
{
}