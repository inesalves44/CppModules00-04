#include "Replace.h"

int main(int argc, char *argv[])
{
    (void)argc;
    std::string test = ".replace";
	std:: string s3 = argv[1] + test;

    Replace newClass = Replace(argv[1], argv[2], argv[3], s3);
	newClass.GetFileContents();
    newClass.ReplaceString();
}