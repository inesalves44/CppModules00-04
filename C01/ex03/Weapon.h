#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>
#include <cstring>

using namespace std;

class Weapon
{
    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon();
        std::string getType();
        void setType(std::string newType);

    private:
        std::string type;
};

#endif