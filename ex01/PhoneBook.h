#ifndef PHONEBOOKS_H
#define PHONEBOOKS_H

#pragma once
#include "Contacts.h"
using namespace std;

class PhoneBooks
{
    private:
        Contacts phoneBook[8];
        int phoneBookLength = 0;
        void AddContact();
        void SearchContact();
        void DeleteContact();
        void PrintTemplate();

    public:
        void PhoneBookMenu();
};

#endif