#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    IMateriaSource* src = new MateriaSource(); 
    src->learnMateria(new Ice()); 
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    
    delete bob; 
    delete me; 
    delete src;

    return 0;
}

/*AMateria *test = new Ice();
    AMateria *test2;

    std::cout << "Type: " << *test << std::endl;
    test2 = test->clone();
    std::cout << "Copy Type: " << *test << std::endl;

    delete test;
    delete test2;

    std::cout << "-----------CUUUUURE----------"<<std::endl;
    AMateria *test3 = new Cure();
    AMateria * test4;

    std::cout << "Type: " << *test3 << std::endl;
    test4 = test3->clone();
    std::cout << "Type: " << *test4 << std::endl;
    delete test3;
    delete test4;
    
    
    AMateria *test = new Ice();
    AMateria *test2 = new Cure();
    Character *characters = new Character("newPeople");
    Character *characters2 = new Character("test2");

    characters->equip(test);
    characters->equip(test2);

    characters2->equip(new Ice());
    characters2->equip(new Cure());
    characters->use(1, *characters2);

    //delete test;
    //delete test2;
    delete characters;
    delete characters2;

    */