#ifndef PHONEBOOKS_H
#define PHONEBOOKS_H

#pragma once
#include "Contacts.h"

class PhoneBooks
{
    private:
        Contacts _phoneBook[8];
        int _phoneBookLength;
        int _addContact();
        bool _searchContact();
        void _deleteContact();
        void _printContacts();
        void _phoneBookMenu();

    public:
        PhoneBooks();
};

#endif