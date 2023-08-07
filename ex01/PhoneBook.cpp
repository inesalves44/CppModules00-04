#include "PhoneBook.h"

void PhoneBooks::DeleteContact()
{
	for (size_t i = 0; i < this->phoneBookLength - 1; i++)
		this->phoneBook[i] = this->phoneBook[i + 1];
}

void PhoneBooks::AddContact()
{
	if (this->phoneBookLength == 8)
		DeleteContact();

	if (this->phoneBookLength < 8)
		this->phoneBookLength++;
	this->phoneBook[this->phoneBookLength - 1].AddContact();
	cout << "\n\033[1;32m\033[1;1mContact added!\n\n";
}

void PhoneBooks::PrintTemplate()
{
	cout << "\033[1;37mIndex |";
	cout << "First Name|";
	cout << "Last Name |";
	cout << "NickName\n";
}

void PhoneBooks::SearchContact()
{
	int input;
	char index;

	cout << "\033[1;34m-------------------Here are Your Contacts--------------------------------------------\n\n";
	this->PrintTemplate();
	for (size_t i = 0; i < phoneBookLength; i++)
	{
		cout << "\033[0;37m";
		phoneBook[i].PrintContact(i);
		cout << "\n";
	}

	do
	{
		cout << "\n";
		cout << "What is the Contact you are looking for: ";
		cin >> index;
		cout << "\n";

		input = int(index - '0') - 1;

		if (input < 0 || input >= this->phoneBookLength)
			cout << "\033[0;31mNot a valid Contact\033[0;37m\n";

	} while (input < 0 || input >= this->phoneBookLength);
	

	phoneBook[input].DisplayContact();
	cout << "\033[0;37m\n\n";
}

void PhoneBooks::PhoneBookMenu()
{
	std::string answer;
	
	cout << "\033[0;36m\033[1;1m-------------------Welcome To The AwesomePhone Book-----------------------------------\033[1;37m\n\n";
	
	do
	{
		cout << "\033[4;37mChoose an Option:\n\033[0;37m\n";
		cout << "1-Add\n";
		cout << "2-Search\n";
		cout << "3-Exit\n";
		
		cin >> answer;
		
		for (size_t i = 0; i < answer.length(); i++)
			towlower(answer[i]);
		
		if (answer == "1" || answer == "add")
			AddContact();
		else if (answer == "2" || answer == "search")
			SearchContact();
		else if (answer == "3" || answer == "exit")
		{
			cout << "\033[1;35mThank you so much for using our PhoneBook!\033[1;37m\n";
			continue;
		}
		else
			cout << "\033[0;31mNot an option! Sorry!\n\033[1;37m\n";

	} while (answer != "3" && answer != "exit");
	
}