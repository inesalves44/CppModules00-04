#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <cstring>
#pragma once

class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie();
        void Announce( void );

    private:
        std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif