#ifndef CONTACTS_H
#define CONTACTS_H

#pragma once
#include <string>
#include <stack>
#include <map>
#include <iostream>
#include <cstring>

class Contacts
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _phoneNumber;
        std::string _nickName;
        std::string _darkSecret;
        void _addFirstName();
        void _addLastName();
        void _addPhoneNumber();
        void _addNickName();
        void _addDarkSecret();
		void _printElement(std::string element);

    public:
        void addContact();
        void printContact(int index);
		void displayContact();
};

#endif