#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap testClap("Nelson");
    ScavTrap test2(testClap);
    ScavTrap testScav("Sergio");

    std::cout << testClap;
    std::cout << test2;
    std::cout << testScav;

    testClap.attack("Agatha");
    testClap.beRepaired(4);
    testScav.guardGate();
    testScav.attack("Olivia");
    testClap.guardGate();
    testScav.beRepaired(4);
    testClap.takeDamage(30);

    std::cout << testClap;
    std::cout << test2;
    std::cout << testScav;
    return 0;
}