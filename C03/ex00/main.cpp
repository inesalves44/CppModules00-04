#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap test("Aníbal");

    test.attack("Adolfo");
    test.beRepaired(3);
    test.attack("Amadeu");
    test.beRepaired(4);
    test.takeDamage(3);
    test.beRepaired(4);
    test.attack("Rui");
    test.beRepaired(3);
    test.beRepaired(5);
    test.attack("bARBARA");
    test.beRepaired(5);
    test.takeDamage(3);
    test.beRepaired(5);
    return 0;
}