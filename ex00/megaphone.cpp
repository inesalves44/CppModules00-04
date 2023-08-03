#include <iostream>
#include <cstring>

void	upperCase(char *str)
{
	for (size_t i = 0; i < strlen(str); i++)
		putchar(toupper(str[i]));
}

int	main(int argc, char *argv[])
{
	int i = 1;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	while (i < argc)
	{
		upperCase(argv[i]); 
		i++;
	}

	return 0;
}