#include "Contacts.h"
using namespace std;

/**
 * @brief This reagion is where all the contacts parametrs are added.
 */
#pragma region addparametrs
void Contacts::_addFirstName()
{
	do
	{
		cout << "\033[0;33mFirst Name: \033[0;37m";
		cin >> this->_firstName;
	} while (this->_firstName == "");
}

void Contacts::_addLastName()
{
	do
	{
		cout << "\033[0;33mLast Name: \033[0;37m";
		cin >> this->_lastName;
	} while (this->_lastName == "");
}

void Contacts::_addNickName()
{
	do
	{
		cout << "\033[0;33mNickName: \033[0;37m";
		cin >> this->_nickName;
	} while (this->_nickName == "");
}

void Contacts::_addDarkSecret()
{
	do
	{
		cout << "\033[0;33mDark Secret: \033[0;37m";
		cin >> this->_darkSecret;
	} while (this->_darkSecret == "");
}

void Contacts::_addPhoneNumber()
{
	do
	{
		cout << "\033[0;33mPhone Number: \033[0;37m";
		cin >> this->_phoneNumber;
		
		if (this->_phoneNumber.length() > 15 || this->_phoneNumber.length() < 7)
		{
			cout << "\033[0;31mPhone Number isn't the correct length\033[0;37m\n\n";
			this->_phoneNumber = "";
			continue;
		}

		for (size_t i = 0; i < this->_phoneNumber.length(); i++)
		{
			if (this->_phoneNumber[i] < '0' || this->_phoneNumber[i] > '9')
			{
				cout << "\033[0;31mPhone Number is only digits\033[0;37m\n\n";
				this->_phoneNumber = "";
				break ;
			}
		}
	} while (this->_phoneNumber == "");
}

#pragma endregion

/**
 * @brief This function is called to create a new contact and give it it's parametrs.
 */
void Contacts::addContact()
{
	_addFirstName();
	_addLastName();
	_addPhoneNumber();
	_addNickName();
	_addDarkSecret();
}

/**
 * @brief These two functions print the contacts in a single line, int the way
 * specified int the subject
 */
#pragma region printingAllContacts
void Contacts::_printElement(std::string element)
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

void Contacts::printContact(int index)
{
	cout << index + 1;
	cout << "     ";
	cout << "|";
	_printElement(this->_firstName);
	cout << "|";
	_printElement(this->_lastName);
	cout << "|";
	_printElement(this->_nickName);
}

#pragma endregion

/**
 * @brief Displays all the parameter's of the contact
 */
void Contacts::displayContact()
{
	cout << "\033[1;32mFirst Name: \033[0;37m";
	cout << this->_firstName;
	cout << "\n";
	cout << "\033[1;32mLast Name: \033[0;37m";
	cout << this->_lastName;
	cout << "\n";
	cout << "\033[1;32mNickname: \033[0;37m";
	cout << this->_nickName;
	cout << "\n";
	cout << "\033[1;32mPhone Number: \033[0;37m";
	cout << this->_phoneNumber;
	cout << "\n";
	cout << "\033[1;32mDark Secret: \033[0;37m";
	cout << this->_darkSecret;
}