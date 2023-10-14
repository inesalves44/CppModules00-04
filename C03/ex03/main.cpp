#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap s("Sia");

    s.attack("Rihanna");
    s.whoAmI();

    std::cout << s;
    return 0;
}