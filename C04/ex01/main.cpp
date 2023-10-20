#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    Animal* test[10];

    for (size_t i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            test[i] = new Dog();
        else
            test[i] = new Cat();
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            test[i]->giveIdeas("I love you so much you are the best!!!");
            test[i]->giveIdeas("SQUIRREL");
        }
        else
        {
            test[i]->giveIdeas("You are fine, give me food");
            test[i]->giveIdeas("ZOOMIIIES");
        }
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << *test[i];
        test[i]->presentIdeas();
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        delete test[i];
    }
    
    return 0;
}

/*std::cout << "-----------------------------Good Classes---------------------------" << std::endl;
    const Animal* bobby = new Dog();
    const Animal* jynx = new Cat();

    std::cout << "---------------------------------" << std::endl;
    bobby->makeSound();
    jynx->makeSound();

    std::cout << "---------------------------------" << std::endl;
    bobby->giveIdeas("give me food");
    bobby->giveIdeas("You are amazing I love you!");
    jynx->giveIdeas("Why is there no food??");
    jynx->giveIdeas("Play with me!!");

    std::cout << "---------------------------------" << std::endl;
    std::cout << "Bobby the dog ideas: " << std::endl;
    bobby->presentIdeas();
    std::cout << "Jynx the cat ideas: " << std::endl;
    jynx->presentIdeas();

    std::cout << "---------------------------------" << std::endl;
    std::cout << bobby->getType() << std::endl;
    std::cout << jynx->getType() << std::endl;

    delete bobby;
    delete jynx;*/