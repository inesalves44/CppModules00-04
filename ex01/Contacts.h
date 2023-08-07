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
        std::string firstName;
        std::string lastName;
        std::string phoneNumber;
        std::string nickName;
        std::string darkSecret;
        void AddFirstName();
        void AddLastName();
        void AddPhoneNumber();
        void AddNickName();
        void AddDarkSecret();
		void PrintElement(std::string element);

    public:
        void AddContact();
        void PrintContact(int index);
		void DisplayContact();
};

#endif