#include "Contacts.h"
using namespace std;

void Contacts::AddFirstName()
{
	do
	{
		cout << "First Name: ";
		cin >> this->firstName;
	} while (this->firstName == "");
}

void Contacts::AddLastName()
{
	do
	{
		cout << "Last Name: ";
		cin >> this->lastName;
	} while (this->lastName == "");
}

void Contacts::AddNickName()
{
	do
	{
		cout << "NickName: ";
		cin >> this->nickName;
	} while (this->nickName == "");
}

void Contacts::AddDarkSecret()
{
	do
	{
		cout << "Dark Secret: ";
		cin >> this->darkSecret;
	} while (this->darkSecret == "");
}

void Contacts::AddPhoneNumber()
{
	do
	{
		cout << "Phone Number: ";
		cin >> this->phoneNumber;
		
		if (this->phoneNumber.length() > 15 || this->phoneNumber.length() < 7)
		{
			cout << "Phone Number isn't the correct length";
			this->phoneNumber = "";
			continue;
		}

		for (size_t i = 0; i < this->phoneNumber.length(); i++)
		{
			if (this->phoneNumber[i] < '0' || this->phoneNumber[i] > '9')
			{
				cout << "Phone Number is only digits";
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

void Contacts::PrintContact(int index)
{
	cout << index + 1;
	cout << "     ";
	cout << "|";
	cout << this->firstName.substr(0, 9);
	if (this->firstName.length() > 10)
		cout << ".";
	else
	{
		for (size_t i = this->firstName.length(); i < 11; i++)
			cout << " ";
	}
	cout << "|";
	cout <<  this->lastName.substr(0, 9);
	if (this->lastName.length() > 10)
		cout << ".";
	else
	{
		for (size_t i = this->lastName.length(); i < 10; i++)
			cout << " ";
	}
	cout << "|";
	cout <<  this->nickName.substr(0, 9);
	if (this->nickName.length() > 10)
		cout << ".";
	else
	{
		for (size_t i = this->nickName.length(); i < 11; i++)
			cout << " ";
	}
}
