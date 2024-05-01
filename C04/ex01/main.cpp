#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    Animal* test[10];

    std::cout << "*******ARRAY: TEST*********" << std::endl; 
    for (size_t i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            test[i] = new Dog();
        else
            test[i] = new Cat();
    }
    
    for (size_t i = 0; i < 4; i++)
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
    
    for (size_t i = 0; i < 4; i++)
    {
        std::cout << *test[i];
        test[i]->presentIdeas();
    }

    for (size_t i = 0; i < 4; i++)
        delete test[i];

    std::cout << std::endl << "**********Copy Tests: Dog and Cat **************" << std::endl;
    const Dog* cao = new Dog();
    
    cao->giveIdeas("HIIIIII");
    cao->presentIdeas();

    Dog* cao2 = new Dog(*cao);
    delete cao;

    cao2->presentIdeas();

    delete cao2;


    Cat* cat = new Cat();
    Cat* catTest = new Cat();

    cat->giveIdeas("foood");
    *catTest = *cat;
    delete cat;
    catTest->presentIdeas();

    delete catTest;
    
    return 0;
}
