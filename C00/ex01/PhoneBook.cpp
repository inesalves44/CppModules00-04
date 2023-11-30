#include "PhoneBook.h"

/**
 * @brief Deletes a contact in case the phoneBook is full.
 * The contact is deleted by coping the array one place to the left.
 */
void PhoneBooks::_deleteContact()
{
	for (size_t i = 0; i < this->_phoneBookLength - 1; i++)
		this->_phoneBook[i] = this->_phoneBook[i + 1];
}

/**
 * @brief Checks if the phonebook has 8 contacts. If so it deletes the first one.
 * Then it adds a contact.
 */
int PhoneBooks::_addContact()
{
	if (this->_phoneBookLength == 8)
	{
		_deleteContact();
		this->_phoneBookLength--;
	}

	if (this->_phoneBook[this->_phoneBookLength].addContact())
	{
		std::cout << "\033[0;31mError!\n\033[1;37m\n";
		return (1);
	}

	if (this->_phoneBookLength < 8)
		this->_phoneBookLength++;
	std::cout << "\n\033[1;32m\033[1;1mContact added!\n\n";
	return (0);
}

/**
 * @brief Prints all the contacts.
 */
void PhoneBooks::_printContacts()
{
	std::cout << "\033[1;37mIndex |";
	std::cout << "First Name|";
	std::cout << "Last Name |";
	std::cout << "NickName\n";

	for (size_t i = 0; i < _phoneBookLength; i++)
	{
		std::cout << "\033[0;37m";
		_phoneBook[i].printContact(i);
		std::cout << "\n";
	}
}

/**
 * @brief Shows the contacts then asks which you want.
 * if it exists it returns the contact, else it gives you an error.
 */
bool PhoneBooks::_searchContact()
{
	int input;
	std::string index;

	if (_phoneBookLength == 0)
	{
		std::cout << "\033[0;31mNo contacts to search\033[0;37m\n";
		return true;
	}

	std::cout << "\033[1;34m-------------------Here are Your Contacts---------------------------------------\n\n";
	
	_printContacts();

	do
	{
		std::cout << "\n";
		std::cout << "What is the Contact you are looking for: ";
		std::getline(std::cin, index);
		std::cout << "\n";

		if (std::cin.eof())
		{
			std::cout << "\033[0;31mError!\n\033[1;37m\n";
			return false;
		}
		if (index.find_first_not_of("0123456789") == std::string::npos)
			input = stoi(index) - 1;
		else
			input = -1;

		if (input < 0 || input >= this->_phoneBookLength)
			std::cout << "\033[0;31mNot a valid Contact\033[0;37m\n";

	} while (input < 0 || input >= this->_phoneBookLength);
	

	_phoneBook[input].displayContact();
	std::cout << "\033[0;37m\n\n";
	return true;
}

/**
 * @brief The PhoneBook Menu promps the user to choose an option.
 */
void PhoneBooks::_phoneBookMenu()
{
	std::string answer;
	
	std::cout << "\033[0;36m\033[1;1m-------------------Welcome To The AwesomePhone Book-----------------------\033[1;37m\n\n";
	
	do
	{
		std::cout << "\033[4;37mChoose an Option:\n\033[0;37m\n";
		std::cout << "1-ADD\n";
		std::cout << "2-SEARCH\n";
		std::cout << "3-EXIT\n";
		
		std::getline(std::cin, answer);
		
		if (std::cin.eof())
			answer = "exit";

		for (size_t i = 0; i < answer.length(); i++)
			answer[i] = towlower(answer[i]);
		
		if (answer == "1" || answer == "add")
		{
			if (_addContact())
				break ;
			else
				continue ;
		}
		else if (answer == "2" || answer == "search")
		{
			if (!_searchContact())
				break ;
			else
				continue ;
		}
		else if (answer == "3" || answer == "exit")
		{
			std::cout << "\033[1;35mThank you so much for using our PhoneBook!\033[1;37m\n";
			continue;
		}
		else
			std::cout << "\033[0;31mNot an option! Sorry!\n\033[1;37m\n";

	} while (answer != "3" && answer != "exit");	
}

/**
 * @brief Construct a new Phone Books:: Phone Books object
 */
PhoneBooks::PhoneBooks()
{
	this->_phoneBookLength = 0;
	_phoneBookMenu();
}