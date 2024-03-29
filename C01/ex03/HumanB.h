#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include <iostream>
#include <cstring>
#include "Weapon.h"

class HumanB
{
    public:
        HumanB(std::string name);
		HumanB();
        void setWeapon(Weapon &weapon);
        void attack();
        ~HumanB();
        

    private:
        std::string name;
        Weapon *weapon;

};

#endif