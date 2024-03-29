#include "Harl.h"

Harl::Harl()
{
	std::cout << "Harl enters the restaurant!\n" <<std::endl;
}

/**
 * @brief This regins contain all the strings methods
 */
#pragma region HarlMessages
void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n"<< std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"<< std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"<< std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n"<< std::endl;
}
#pragma endregion

/**
 * @brief -> chooses which complain Harl has.
 * creates an array of strings as levels.
 *  Then creates a pointer to a member function. And Then this is composed of all the pointers.
 * Thens checks which pointer to use.
 * @param level -> string that is a methods
 */
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
            test = true;
        }
    }
    if (test == false)
        std::cout << "Fantastic work thank you!\n"<< std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl leaves the restaurant!" <<std::endl;
}