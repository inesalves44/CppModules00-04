#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "-----------------------------Good Classes---------------------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* bobby = new Dog();
    const Animal* jynx = new Cat();

    std::cout << "---------------------------------" << std::endl;
    std::cout << *meta;
    std::cout << *bobby;
    std::cout << *jynx;

    std::cout << "---------------------------------" << std::endl;
    meta->makeSound();
    bobby->makeSound();
    jynx->makeSound();

    std::cout << "---------------------------------" << std::endl;
    std::cout << meta->getType() << std::endl;
    std::cout << bobby->getType() << std::endl;
    std::cout << jynx->getType() << std::endl;

    delete meta;
    delete bobby;
    delete jynx;

    std::cout << "-----------------------------Wrong Classes---------------------------" << std::endl;
    
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* bobby2 = new WrongDog();
    const WrongAnimal* jynx2 = new WrongCat();
    const WrongCat* test2 = new WrongCat();

    std::cout << "---------------------------------" << std::endl;
    std::cout << *meta2;
    std::cout << *bobby2;
    std::cout << *jynx2;
    std::cout << *test2;

    std::cout << "---------------------------------" << std::endl;
    meta2->makeSound();
    bobby2->makeSound();
    jynx2->makeSound();
    test2->makeSound();

    std::cout << "---------------------------------" << std::endl;
    std::cout << meta2->getType() << std::endl;
    std::cout << bobby2->getType() << std::endl;
    std::cout << jynx2->getType() << std::endl;
    std::cout << test2->getType() << std::endl;

    delete meta2;
    delete bobby2;
    delete jynx2;
    delete test2;
    return 0;
}