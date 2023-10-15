#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main(void)
{
    FlagTrap flags("Rihanna");
    FlagTrap flags2(flags);

    std::cout << flags;
    std::cout << flags2;
    
    flags.highFivesGuys();
    flags.attack("Christina");
    flags.beRepaired(10);
    flags.takeDamage(100);

    std::cout << flags;
    std::cout << flags2;
    
    return 0;
}