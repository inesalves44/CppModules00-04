#include "Harl.h"

void baseTests()
{
	Harl objects;

	std::cout << "WAITER: Hello Mr. Harl do you want anything more?\n\nHARL:";
    objects.complain("DEBUG");
    std::cout << "WAITER: That costs more money\n\nHARL:";
    objects.complain("iNfO");
    std::cout << "WAITER: Sorry nothing I can do\n\nHARL:";
    objects.complain("WaRning");
    std::cout << "WAITER: Again nothing I can do!\n\nHARL:";
    objects.complain("ErroR");
    std::cout << "WAITER: Sure. *calls the manager* MANAGER: Nothing to do. Pay.\n\nHARL:";
    objects.complain("test");
}

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "\033[1;32mBasic tests will run. You can use specific testes with ./harl complain\n\n\033[0;0m" << std::endl;
		baseTests();
	}
	else if (argc == 2)
	{
		Harl objects;
		objects.complain(argv[1]);
	}
	else
	{
		std::cout << "Too many arguments" << std::endl;
	}
}