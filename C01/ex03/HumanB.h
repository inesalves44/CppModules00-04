#ifndef HUMANB_H
#define HUMANB_H

#pragma once
#include <string>
#include <iostream>
#include <cstring>
#include "Weapon.h"

class HumanB
{
    public:
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
        void attack();
        ~HumanB();
        

    private:
        std::string name;
        Weapon &weapon;

};

#endif