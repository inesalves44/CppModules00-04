#include "Contacts.h"

/**
 * @brief This reagion is where all the contacts parametrs are added.
 */
#pragma region addparametrs
void Contacts::_addFirstName()
{
	do
	{
		std::cout << "\033[0;33mFirst Name: \033[0;37m";
		std::getline(std::cin, this->_firstName);
		if (std::cin.eof())
			break ;
	} while (this->_firstName == "");
}

void Contacts::_addLastName()
{
	do
	{
		std::cout << "\033[0;33mLast Name: \033[0;37m";
		std::getline(std::cin, this->_lastName);
		if (std::cin.eof())
			break ;
	} while (this->_lastName == "");
}

void Contacts::_addNickName()
{
	do
	{
		std::cout << "\033[0;33mNickName: \033[0;37m";
		std::getline(std::cin, this->_nickName);
		if (std::cin.eof())
			break ;
	} while (this->_nickName == "");
}

void Contacts::_addDarkSecret()
{
	do
	{
		std::cout << "\033[0;33mDark Secret: \033[0;37m";
		std::getline(std::cin, this->_darkSecret);
		if (std::cin.eof())
			break ;
	} while (this->_darkSecret == "");
}

void Contacts::_addPhoneNumber()
{
	do
	{
		std::cout << "\033[0;33mPhone Number: \033[0;37m";
		std::getline(std::cin, this->_phoneNumber);
		
		if (std::cin.eof())
			break ;

		if (this->_phoneNumber.length() > 15 || this->_phoneNumber.length() < 7)
		{
			std::cout << "\033[0;31mPhone Number isn't the correct length\033[0;37m\n\n";
			this->_phoneNumber = "";
			continue;
		}

		for (size_t i = 0; i < this->_phoneNumber.length(); i++)
		{
			if (this->_phoneNumber[i] < '0' || this->_phoneNumber[i] > '9')
			{
				if (i == 0 && this->_phoneNumber[i] == '+')
					;
				else
				{
					std::cout << "\033[0;31mPhone Number is only digits\033[0;37m\n\n";
					this->_phoneNumber = "";
					break ;
				}
			}
		}
	} while (this->_phoneNumber == "");
}

#pragma endregion

/**
 * @brief This function is called to create a new contact and give it it's parametrs.
 */
int Contacts::addContact()
{
	_addFirstName();
	if (this->_firstName != "")
		_addLastName();
	if (this->_lastName != "")
		_addPhoneNumber();
	if (this->_phoneNumber != "")
		_addNickName();
	if (this->_nickName != "")
		_addDarkSecret();
	if (this->_darkSecret == "" || this->_firstName == "" || this->_lastName == "" \
	|| this->_phoneNumber == "" || this->_nickName == "")
		return (1);
	return 0;
}

/**
 * @brief These two functions print the contacts in a single line, int the way
 * specified int the subject
 */
#pragma region printingAllContacts
void Contacts::_printElement(std::string element)
{
	std::cout << element.substr(0, 9);
	if (element.length() > 10)
		std::cout << ".";
	else
	{
		std::cout << " ";
		for (size_t i = element.length() + 1; i < 10; i++)
			std::cout << " ";
	}
}

void Contacts::printContact(int index)
{
	std::cout << index + 1;
	std::cout << "     ";
	std::cout << "|";
	_printElement(this->_firstName);
	std::cout << "|";
	_printElement(this->_lastName);
	std::cout << "|";
	_printElement(this->_nickName);
}

#pragma endregion

/**
 * @brief Displays all the parameter's of the contact
 */
void Contacts::displayContact()
{
	std::cout << "\033[1;32mFirst Name: \033[0;37m";
	std::cout << this->_firstName;
	std::cout << "\n";
	std::cout << "\033[1;32mLast Name: \033[0;37m";
	std::cout << this->_lastName;
	std::cout << "\n";
	std::cout << "\033[1;32mNickname: \033[0;37m";
	std::cout << this->_nickName;
	std::cout << "\n";
	std::cout << "\033[1;32mPhone Number: \033[0;37m";
	std::cout << this->_phoneNumber;
	std::cout << "\n";
	std::cout << "\033[1;32mDark Secret: \033[0;37m";
	std::cout << this->_darkSecret;
}