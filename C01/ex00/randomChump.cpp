#include "Zombie.h"

/** @brief This function creates a zombie without memmory allocation.
* the zombie announces itself.
* @param name the zombie's name
*/
void randomChump( std::string name )
{
	Zombie random(name);

	random.Announce();
}