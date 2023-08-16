#ifndef PHONEBOOKS_H
#define PHONEBOOKS_H

#pragma once
#include "Contacts.h"
using namespace std;

class PhoneBooks
{
    private:
        Contacts _phoneBook[8];
        int _phoneBookLength = 0;
        void _addContact();
        bool _searchContact();
        void _deleteContact();
        void _printContacts();
        void _phoneBookMenu();

    public:
        PhoneBooks();
};

#endif