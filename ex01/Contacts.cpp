#include "Contacts.h"
using namespace std;

void Contacts::AddFirstName()
{
	do
	{
		cout << "\033[0;33mFirst Name: \033[0;37m";
		cin >> this->firstName;
	} while (this->firstName == "");
}

void Contacts::AddLastName()
{
	do
	{
		cout << "\033[0;33mLast Name: \033[0;37m";
		cin >> this->lastName;
	} while (this->lastName == "");
}

void Contacts::AddNickName()
{
	do
	{
		cout << "\033[0;33mNickName: \033[0;37m";
		cin >> this->nickName;
	} while (this->nickName == "");
}

void Contacts::AddDarkSecret()
{
	do
	{
		cout << "\033[0;33mDark Secret: \033[0;37m";
		cin >> this->darkSecret;
	} while (this->darkSecret == "");
}

void Contacts::AddPhoneNumber()
{
	do
	{
		cout << "\033[0;33mPhone Number: \033[0;37m";
		cin >> this->phoneNumber;
		
		if (this->phoneNumber.length() > 15 || this->phoneNumber.length() < 7)
		{
			cout << "\033[0;31mPhone Number isn't the correct length\033[0;37m\n\n";
			this->phoneNumber = "";
			continue;
		}

		for (size_t i = 0; i < this->phoneNumber.length(); i++)
		{
			if (this->phoneNumber[i] < '0' || this->phoneNumber[i] > '9')
			{
				cout << "\033[0;31mPhone Number is only digits\033[0;37m\n\n";
				this->phoneNumber = "";
				break ;
			}
		}
	} while (this->phoneNumber == "");
}

void Contacts::AddContact()
{
	AddFirstName();
	AddLastName();
	AddPhoneNumber();
	AddNickName();
	AddDarkSecret();
}

void Contacts::PrintElement(std::string element)
{
	cout << element.substr(0, 9);
	if (element.length() > 10)
		cout << ".";
	else
	{
		cout << " ";
		for (size_t i = element.length() + 1; i < 10; i++)
			cout << " ";
	}
}

void Contacts::PrintContact(int index)
{
	cout << index + 1;
	cout << "     ";
	cout << "|";
	PrintElement(this->firstName);
	cout << "|";
	PrintElement(this->lastName);
	cout << "|";
	PrintElement(this->nickName);
}

void Contacts::DisplayContact()
{
	cout << "\033[1;32mFirst Name: \033[0;37m";
	cout << this->firstName;
	cout << "\n";
	cout << "\033[1;32mLast Name: \033[0;37m";
	cout << this->lastName;
	cout << "\n";
	cout << "\033[1;32mNickname: \033[0;37m";
	cout << this->nickName;
	cout << "\n";
	cout << "\033[1;32mPhone Number: \033[0;37m";
	cout << this->phoneNumber;
	cout << "\n";
	cout << "\033[1;32mDark Secret: \033[0;37m";
	cout << this->darkSecret;
}