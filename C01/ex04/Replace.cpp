#include "Replace.h"

Replace::Replace(std::string str, std::string s1Class, std::string s2Class, std::string s3Class)
{
    fileContent = str;
    s1 = s1Class;
    s2 = s2Class;
    s3 = s3Class;
}

string Replace::CheckString()
{
    int j = 0;
    int z = i;
    string newString;

    while (s1[j] == fileContent[z])
    {
        j++;
        z++;
    }

    if (j == s1.length())
    {
        newString = s2;
        i = z;
    }
    else
    {
        newString = fileContent[i];
        i++;
    }
    return newString;
}

void Replace::ReplaceString()
{
    i = 0;
    string newString;
    ofstream outfile;

    outfile.open(s3, ios::out);
    while (fileContent[i] != '\0')
    {
        if (fileContent[i] == s1[0])
        {
            newString = CheckString();
            if (newString.length() == 1)
                outfile << newString[0];
            else
                outfile << newString;
        }
        else
        {
            outfile << fileContent[i];
            i++;
        }
    }
    outfile.close();
}

Replace::~Replace()
{
    
}