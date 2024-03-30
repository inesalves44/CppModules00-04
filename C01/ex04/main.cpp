#include "Replace.h"

int main(int argc, char *argv[])
{
    (void)argc;
	std::string test = ".replace";
	std:: string s3 = argv[1] + test;

	if (argc != 4)
	{
		std::cout << "The program needs 3 arguments" <<std::endl;
		std::cout << "Correct usage: ./string originalFile stringToReplace newString" <<std::endl;
		return 1;
	}

    Replace newClass = Replace(argv[1], argv[2], argv[3], s3);
	newClass.GetFileContents();
    newClass.ReplaceString();
	return 0;
}