#include "Zombie.h"

/**
 * @brief Construct a new Zombie:: Zombie object.
 * This is the second cnstructor. This way can create the 
 * array of zombies.
 */
Zombie::Zombie()
{
	std::cout << "Zombie created" << std::endl;
}

/**
 * @brief constructor. Gives the zombie it's name
 * @name the name of the zombie
*/
Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie "<< this->name << "created" << std::endl;
}

/**
 * @brief the zombie announces itself
*/
void Zombie::Announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

/**
 * @brief THis function name's an already created zombie.
 * @param name the name of the zombie
 */
void Zombie::SetNameZombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie was renamed to: " << this->name << "\n";
}

/**
 * @brief destructor. Destroys the zombie
*/
Zombie::~Zombie()
{
	std::cout << this->name << ": Has been destroyed\n";
}