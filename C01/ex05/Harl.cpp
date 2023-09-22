#include "Harl.h"

Harl::Harl()
{

}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"debug", "info", "warning", "error"};

    bool test = false;
    void (Harl::*ptr[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (size_t i = 0; i < level.length(); i++)
        level[i] = (char)towlower(level[i]);
    
    for (size_t i = 0; i < 4 && test == false; i++)
    {
        if (level == levels[i])
        {
            (this->*ptr[i])();
            std::cout << "\n";
            test = true;
        }
    }
    if (test == false)
        std::cout << "Fantastic work thank you!";
}

Harl::~Harl()
{

}