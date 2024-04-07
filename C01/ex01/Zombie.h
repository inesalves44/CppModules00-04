#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>
#include <cstring>

#ifndef HORDE_NUMBER
# define HORDE_NUMBER -5
#endif


class Zombie
{
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void Announce( void );
        void SetNameZombie(std::string name);

    private:
        std::string name;
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif