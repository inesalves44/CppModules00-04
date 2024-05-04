#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


void testingMainSubject()
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
}

void testingMateriaSource()
{
    IMateriaSource* src = new MateriaSource();
    AMateria* temp;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    IMateriaSource* src2 = new MateriaSource();
    src2->learnMateria(new Cure());
    temp = src2->createMateria("test");
   *dynamic_cast<MateriaSource*>(src2) = *dynamic_cast<MateriaSource*>(src);
    
    delete src;
    delete src2;
}

void testingCharacters()
{
	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	ICharacter* character = new Character();

	character->equip(src->createMateria("ice"));
	character->equip(src->createMateria("cure"));
	character->equip(src->createMateria("ice"));
	character->equip(src->createMateria("cure"));
	//it will not work
	character->equip(src->createMateria("cure"));

	std::cout << "\033[0;36mCHARACTER1: \n" << *dynamic_cast<Character*>(character);

	character->unequip(1);
	character->unequip(0);
	character->equip(src->createMateria("ice"));

	std::cout << "\033[0;36mCHARACTER1: \n" << *dynamic_cast<Character*>(character);

	ICharacter* character2 = new Character(*static_cast<Character*>(character));
	std::cout << "\033[0;32mCHARACTER2: \n" << *dynamic_cast<Character*>(character2);

	character->unequip(3);
	character->unequip(3);
	std::cout << "\033[0;36mCHARACTER1: \n" << *dynamic_cast<Character*>(character);
	
	
	std::cout << "\033[0;36mCHARACTER1: \n" << *dynamic_cast<Character*>(character);
	character2->equip(src->createMateria("cure"));
	std::cout << "\033[0;32mCHARACTER2: \n" << *dynamic_cast<Character*>(character2);

	ICharacter* character3 = new Character(*static_cast<Character*>(character2));
	std::cout << "\033[1;31mCHARACTER3: \n" << *dynamic_cast<Character*>(character3);
	*dynamic_cast<Character*>(character3) = *dynamic_cast<Character*>(character);
	std::cout << "\033[0;36mCHARACTER1: \n" << *dynamic_cast<Character*>(character);
	std::cout << "\033[1;31mCHARACTER3: \n" << *dynamic_cast<Character*>(character3);

	delete src;
	delete character;
	delete character2;
	delete character3;
}


void testingAMateria()
{
	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

	AMateria *temp;

	temp = src->createMateria("ice");
	std::cout << temp->GetType() << std::endl;

	AMateria *temp2 = new Ice(*static_cast<Ice*>(temp));
	std::cout << temp2->GetType() << std::endl;

	*dynamic_cast<AMateria*>(temp2) = *dynamic_cast<AMateria*>(src->createMateria("cure"));
	std::cout << temp2->GetType() << std::endl;

	delete temp;
	delete temp2;
}

int main()
{
	//testingMainSubject();
	//testingMateriaSource();
	testingCharacters();
	//testingAMateria();
}

