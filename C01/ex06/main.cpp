#include "Harl.h"

int main(int argc, char *argv[])
{
    Harl objects;

    (void)argc;
	if (argc != 2 )
	{
		std::cout << "Tests run with: ./harlFilter <string>" << std::endl;
		return (1);
	}
    objects.filter(argv[1]);
}