#include "Zombie.h"

/**
 * @brief constructor. Gives the zombie it's name
 * @name the name of the zombie
*/
Zombie::Zombie(std::string name) :name(name)
{
	std::cout << "Zombie "<< this->name << " created" << std::endl;
}

/**
 * @brief the zombie announces itself
*/
void Zombie::Announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

/**
 * @brief destructor. Destroys the zombie
*/
Zombie::~Zombie()
{
	std::cout << this->name << " : Has been destroyed\n";
}