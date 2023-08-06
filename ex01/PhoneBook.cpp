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
	cout << "Contact added!\n";
}

void PhoneBooks::PrintTemplate()
{
	cout << "Index |";
	cout << "First Name |";
	cout << "Last Name |";
	cout << "NickName\n";
}

void PhoneBooks::SearchContact()
{
	int input;
	char index;

	cout << "-------------------Here are Your Contacts--------------------------------------------\n";
	this->PrintTemplate();
	for (size_t i = 0; i < phoneBookLength; i++)
	{
		phoneBook[i].PrintContact(i);
		cout << "\n";
	}

	do
	{
		cout << "\n";
		cout << "What is the Contact you are looking for: ";
		cin >> index;

		input = int(index - '0') - 1;

		if (input < 0 || input >= this->phoneBookLength)
			cout << "Not a valid Contact\n";

	} while (input < 0 || input >= this->phoneBookLength);
	
	
	this->PrintTemplate();
	phoneBook[input].PrintContact(input);
	cout << "\n";
}

void PhoneBooks::PhoneBookMenu()
{
	std::string answer;
	
	do
	{
		cout << "-------------------Welcome To The AwesomePhone Book-----------------------------------\n";
		cout << "Choose an Option:\n";
		cout << "1-Added\n";
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
			cout << "Thank you so much for using our PhoneBook!\n";
			continue;
		}
		else
			cout << "Not an option! Sorry!\n";

	} while (answer != "3" && answer != "exit");
	
}