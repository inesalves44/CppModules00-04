#include <string>
#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <cstdlib>

std::string GetFileContents(std::string argv)
{
    std::string fileContents;
    std::ifstream infile;
    std::stringstream full;
    
    infile.open(argv.c_str(), std::ios::in);
	if (!infile)
	{
		std::cerr << "The file cannot be open" << std::endl;
		return NULL;
	}
    
    full << infile.rdbuf();
    fileContents = full.str();
    return fileContents;
    infile.close();
}


std::string SubstituteInString(std::string fileContents,std::string oldString, std::string newString)
{
    size_t begin;
    std::string newfileContents;

    begin = fileContents.find(oldString);
    newfileContents = fileContents;
    std::cout << newfileContents;

    while (begin != std::string::npos)
    {
        newfileContents.erase(begin, (size_t)oldString.length());
        newfileContents.insert(begin, newString);
        begin = newfileContents.find(oldString);
    }
    
    return newString;
}

void CreateAndWriteToNewFile(std::string argv, std::string fileContents,std::string oldString, std::string newString)
{
    std::string nameNewFile = argv + ".replace";
    std::ofstream outfile;
    std::string newFileContents;

    if (argv == "" || oldString == "")
    {
        std::cerr << "the file or the old string cannot be empty" << std::endl;
        return ;
    }
    outfile.open(nameNewFile.c_str(), std::ios::out);
    if (!outfile)
    {
        std::cerr << "The file cannot be open" << std::endl;
		return ;
    }

    newFileContents = SubstituteInString(fileContents, oldString, newString);

    outfile << newFileContents;

    outfile.close();
}

int main(int argc, char *argv[])
{
    std::string fileContents;

    if (argc != 4)
    {
        std::cerr << "the program runs with: ./string <filename> OldString NewString" << std::endl;
        return 1;
    }

    fileContents = GetFileContents(argv[1]);
    CreateAndWriteToNewFile(argv[1], fileContents, argv[2], argv[3]);
    
    return 0;
}