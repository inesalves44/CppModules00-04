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
void PhoneBooks::_addContact()
{
	if (this->_phoneBookLength == 8)
		_deleteContact();

	if (this->_phoneBookLength < 8)
		this->_phoneBookLength++;
	this->_phoneBook[this->_phoneBookLength - 1].addContact();
	cout << "\n\033[1;32m\033[1;1mContact added!\n\n";
}

/**
 * @brief Prints all the contacts.
 */
void PhoneBooks::_printContacts()
{
	cout << "\033[1;37mIndex |";
	cout << "First Name|";
	cout << "Last Name |";
	cout << "NickName\n";

	for (size_t i = 0; i < _phoneBookLength; i++)
	{
		cout << "\033[0;37m";
		_phoneBook[i].printContact(i);
		cout << "\n";
	}
}

/**
 * @brief Shows the contacts then asks which you want.
 * if it exists it returns the contact, else it gives you an error.
 */
bool PhoneBooks::_searchContact()
{
	int input;
	string index;

	if (_phoneBookLength == 0)
	{
		cout << "\033[0;31mNo contacts to search\033[0;37m\n";
		return false;
	}

	cout << "\033[1;34m-------------------Here are Your Contacts---------------------------------------\n\n";
	
	_printContacts();

	do
	{
		cout << "\n";
		cout << "What is the Contact you are looking for: ";
		cin >> index;
		cout << "\n";

		input = stoi(index) - 1;

		if (input < 0 || input >= this->_phoneBookLength)
			cout << "\033[0;31mNot a valid Contact\033[0;37m\n";

	} while (input < 0 || input >= this->_phoneBookLength);
	

	_phoneBook[input].displayContact();
	cout << "\033[0;37m\n\n";
	return true;
}

/**
 * @brief The PhoneBook Menu promps the user to choose an option.
 */
void PhoneBooks::_phoneBookMenu()
{
	std::string answer;
	
	cout << "\033[0;36m\033[1;1m-------------------Welcome To The AwesomePhone Book-----------------------\033[1;37m\n\n";
	
	do
	{
		cout << "\033[4;37mChoose an Option:\n\033[0;37m\n";
		cout << "1-ADD\n";
		cout << "2-SEARCH\n";
		cout << "3-EXIT\n";
		
		cin >> answer;
		
		for (size_t i = 0; i < answer.length(); i++)
			answer[i] = towlower(answer[i]);
		
		if (answer == "1" || answer == "add")
			_addContact();
		else if (answer == "2" || answer == "search")
			_searchContact();
		else if (answer == "3" || answer == "exit")
		{
			cout << "\033[1;35mThank you so much for using our PhoneBook!\033[1;37m\n";
			continue;
		}
		else
			cout << "\033[0;31mNot an option! Sorry!\n\033[1;37m\n";

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