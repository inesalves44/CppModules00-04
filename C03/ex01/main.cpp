#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap testClap("Nelson");

    std::cout << testClap;
    testClap.attack("Sergio");
    testClap.beRepaired(4);
    std::cout << testClap;
    testClap.guardGate();
    return 0;
}