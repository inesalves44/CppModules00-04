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

void Contacts::PrintContact()
{
	cout << "-----------------The Contact------------\n";
	cout << this->firstName + "\n";
	cout << this->lastName + "\n";
	cout << this->nickName + "\n";
	cout << this->darkSecret + "\n";
	cout << this->phoneNumber+ "\n";
}