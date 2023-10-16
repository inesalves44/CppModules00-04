#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    std::cout << "-----------------------------Good Classes---------------------------" << std::endl;
    const Animal* bobby = new Dog();
    const Animal* jynx = new Cat();

    std::cout << "---------------------------------" << std::endl;
    bobby->makeSound();
    jynx->makeSound();

    std::cout << "---------------------------------" << std::endl;
    std::cout << bobby->getType() << std::endl;
    std::cout << jynx->getType() << std::endl;

    delete bobby;
    delete jynx;

    return 0;
}