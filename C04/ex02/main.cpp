#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    //Animal test; //it does not work!

    Animal *bobby = new Dog();
    Animal *jynx = new Cat();
    Animal *testJynx;

    bobby->getType();
    bobby->giveIdeas("I wove u");
    bobby->presentIdeas();

    jynx->giveIdeas("FOOOOOOD");
    testJynx = jynx;
    testJynx->presentIdeas();

    delete bobby;
    delete jynx;

    return 0;
}

