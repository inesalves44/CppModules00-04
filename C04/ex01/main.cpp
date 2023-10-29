#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    Animal* test[10];

    std::cout << "*******ARRAY: TEST*********" << std::endl; 
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
        delete test[i];

    std::cout << std::endl << "**********Copy Tests: Dog and Cat **************" << std::endl;
    const Dog* cao = new Dog();
    const Cat* gato = new Cat();
    
    cao->giveIdeas("HIIIIII");
    gato->giveIdeas("FOOD");

    Dog* cao2 = new Dog(*cao);
    Cat* gato2 = new Cat(*gato);

    cao2->presentIdeas();
    gato2->presentIdeas();

    delete cao;
    delete cao2;
    delete gato;
    delete gato2;

    return 0;
}
