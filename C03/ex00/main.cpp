#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap test("Aníbal");
    ClapTrap test2(test);
    ClapTrap test3();

    std::cout << test;
    std::cout << test2;
    /*test.attack("Adolfo");
    test.beRepaired(3);
    test.attack("Amadeu");
    test.beRepaired(4);
    test.takeDamage(3);
    test.beRepaired(4);
    test.attack("Rui");
    test.beRepaired(3);
    test.beRepaired(5);
    test.attack("Barbara");
    test.beRepaired(5);
    test.takeDamage(3);
    test.beRepaired(5);*/
    return 0;
}