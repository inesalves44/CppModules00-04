#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap s("Sia");
    DiamondTrap m("Joi");
    DiamondTrap s2(s);

    std::cout << s;
    std::cout << m;
    std::cout << s2;
    s.attack("Rihanna");
    s.whoAmI();
    m.guardGate();
    m.highFivesGuys();

    std::cout << s;
    std::cout << m;
    std::cout << s2;
    return 0;
}