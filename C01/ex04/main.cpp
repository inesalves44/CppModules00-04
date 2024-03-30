#include "Replace.h"

void replaceString(char *argv[])
{
	std::string test = ".replace";
	std:: string s3 = argv[1] + test;

    Replace newClass = Replace(argv[1], argv[2], argv[3], s3);
	newClass.GetFileContents();
    newClass.ReplaceString();
}

int main(int argc, char *argv[])
{
    (void)argc;
	if (argc != 4)
	{
		std::cout << "The program needs 3 arguments" <<std::endl;
		std::cout << "Correct usage: ./string originalFile stringToReplace newString" <<std::endl;
		return 1;
	}
	replaceString(argv);
	return 0;
}