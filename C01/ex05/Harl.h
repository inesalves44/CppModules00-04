#ifndef HARL_H
#define HARL_H

#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <sstream> 

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string);

    private:
        void  debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif