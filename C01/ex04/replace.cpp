#include "replace.hpp"

std::string GetFileContents(std::string argv)
{
    std::string fileContents;
    std::ifstream infile;
    std::stringstream full;
    
    infile.open(argv.c_str(), std::ios::in);
	if (!infile)
	{
		std::cerr << "The file cannot be open" << std::endl;
		return "";
	}
    
    full << infile.rdbuf();
    fileContents = full.str();
    infile.close();

    return fileContents;
}


std::string SubstituteInString(std::string fileContents,std::string oldString, std::string newString)
{
    size_t begin;
    std::string newfileContents;

    begin = fileContents.find(oldString);
    
    newfileContents = fileContents;

    while (begin != std::string::npos)
    {
        newfileContents.erase(begin, (size_t)oldString.length());
        newfileContents.insert(begin, newString);
        begin = newfileContents.find(oldString);
    }
    
    return newfileContents;
}

void newFileCreation(std::string fileName, std::string newFileContents)
{
    std::string nameNewFile = fileName + ".replace";
    std::ofstream outfile;

    outfile.open(nameNewFile.c_str(), std::ios::out);
    
    if (!outfile)
    {
        std::cerr << "The file cannot be open." << std::endl;
		return ;
    }

    outfile << newFileContents;

    outfile.close();
}


void CreateAndWriteToNewFile(std::string argv, std::string fileContents,std::string oldString, std::string newString)
{
    std::string nameNewFile = argv + ".replace";
    std::ofstream outfile;
    std::string newFileContents;

    if (argv == "" || oldString == "")
    {
        std::cerr << "the file or the original string cannot be empty" << std::endl;
        return ;
    }
    newFileContents = SubstituteInString(fileContents, oldString, newString);

    if (newFileContents == fileContents)
        std::cerr << "Nothing was found to replace.\nThe file are equal." << std::endl;

    newFileCreation(argv, newFileContents);
}

void replacing(char *argv[])
{
    std::string fileContents;

    fileContents = GetFileContents(argv[1]);
    
    if (fileContents == "")
        return ;

    CreateAndWriteToNewFile(argv[1], fileContents, argv[2], argv[3]);
}