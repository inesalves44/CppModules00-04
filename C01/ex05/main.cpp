#include "Harl.h"

int main()
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