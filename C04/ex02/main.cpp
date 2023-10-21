#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    //Animal test; //it does not work!

    Animal *bobby = new Dog();

    bobby->getType();
    bobby->giveIdeas("I wove u");
    bobby->presentIdeas();    
    
    delete bobby;
    return 0;
}

