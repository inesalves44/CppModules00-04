#include "AMateria.hpp"
#include "Ice.hpp"

int main(void)
{
    AMateria *test = new Ice();

    //test->GetType();
    test->clone();
    return 0;
}

