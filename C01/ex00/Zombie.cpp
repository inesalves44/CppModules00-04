#include "Zombie.h"

/**
 * @brief the zombie announces itself
*/
void Zombie::Announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

/**
 * @brief constructor. Gives the zombie it's name
 * @name the name of the zombie
*/
Zombie::Zombie(std::string name)
{
	this->name = name;
}

/**
 * @brief destructor. Destroys the zombie
*/
Zombie::~Zombie()
{
	std::cout << this->name << " : Has been destroyed\n";
}