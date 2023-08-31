#include "Zombie.h"

Zombie::Zombie()
{
	;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::Announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::NameZombie(std::string name)
{
	this->name = name; 
}

Zombie::~Zombie()
{
	std::cout << this->name << ": Has been destroyed\n";
}