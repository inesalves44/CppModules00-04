#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

/*int main(void)
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
*/

int main()
{
    std::cout << "****** First Test Materia Source *****" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Ice());

    src->learnMateria(new Cure());

    std::cout << "********* End Test of Materia Source ****\n" << std::endl;
    
    std::cout << "****** Now testing Characters *****\n" << std::endl;
    ICharacter* harry = new Character("Harry Potter");
    ICharacter* voldy = new Character("Voldy");
    
    AMateria *wand;
    wand = src->createMateria("ice");
    std::cout << "Harry: ";
    harry->equip(wand);
    std::cout << "Harry: ";
    harry->equip(wand);
    wand = src->createMateria("cure");
    std::cout << "Harry: ";
    harry->equip(wand);
    std::cout << "Harry: ";
    harry->equip(wand);
    std::cout << "Harry: ";
    harry->equip(wand);
    std::cout << "Harry: ";
    harry->unequip(2);
    std::cout << "Harry: ";
    harry->equip(wand);

    std::cout << "Voldy: ";
    voldy->equip(wand);
    wand = src->createMateria("ice");
    std::cout << "Voldy: ";
    voldy->equip(wand);
    std::cout << "Voldy: ";
    voldy->unequip(2);

    std::cout << "Harry: ";
    harry->use(1, *voldy);
    std::cout << "Harry: ";
    harry->use(3, *voldy);
    std::cout << "Harry: ";
    harry->use(4, *voldy);
    std::cout << "********* End Test of Character ****" << std::endl;

    delete harry;
    delete voldy;
    delete wand;
    delete src;
    
}
