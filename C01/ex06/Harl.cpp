#include "Harl.h"

Harl::Harl()
{

}

#pragma region HarlComplaints 

void Harl::debug(void)
{
    std::cout << "[DEBUG]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
    std::cout << "\n\n";
}

void Harl::info(void)
{
    std::cout << "[INFO]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << "\n\n";
}

void Harl::warning(void)
{
    std::cout << "[WARNING]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    std::cout << "\n\n";
}

void Harl::error(void)
{
    std::cout << "[ERROR]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << "\n\n";
}

#pragma endregion

/**
 * @brief this function filters the Harl complaints with a switch
 * @param statement 
 */
void    Harl::filter(std::string statement)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int a = -1;
    
    for (size_t i = 0; i < statement.length(); i++)
        statement[i] = (char)towupper(statement[i]);

    for (size_t i = 0; i < 4; i++)
        if (levels[i] == statement)
            a = i + 1;

    switch (a)
    {
        case 1:
            this->debug();
            this->info();
            this->warning();
            this->error();
            break;
        case 2:
            this->info();
            this->warning();
            this->error();
            break;
        case 3:
            this->warning();
            this->error();
            break;
        case 4:
            this->error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]";
            break;
    }
} 

Harl::~Harl()
{

}