#ifndef PHONEBOOKS_H
#define PHONEBOOKS_H

#pragma once
#include "Contacts.h"
#include<array>
using namespace std;

class PhoneBooks
{
    private:
        array<Contacts, 8> phoneBook;

    public:
        void AddContact(Contacts contact);
        int  GetPhoneBookLength();
};

#endif