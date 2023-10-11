#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main(void)
{
    FlagTrap flags("Rihanna");

    std::cout << flags;
    flags.highFivesGuys();
    flags.attack("Christina");
    flags.beRepaired(10);
    std::cout << flags;
    return 0;
}