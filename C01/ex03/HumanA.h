#ifndef HUMANA_H
#define HUMANA_H

#include <string>
#include <iostream>
#include <cstring>
#include "Weapon.h"

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack();

    private:
        std::string name;
        Weapon &weapon;
};

#endif