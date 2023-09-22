#include "Replace.h"

/**
 * @brief Construct a new Replace:: Replace object
 * it determines some parametrs for each property of the object
 * @param str -> cotent for the file
 * @param s1Class first string
 * @param s2Class second string
 * @param s3Class new file
 */
Replace::Replace(std::string str, std::string s1Class, std::string s2Class, std::string s3Class)
{
    fileContent = str;
    s1 = s1Class;
    s2 = s2Class;
    s3 = s3Class;
}

/**
 * @brief creates a newString.
 * while the strings are the same,they go through both strings.
 * if the length is equal to s1, newString is equal to s2. else new string equals the character.
 * @return string -> returns the newString
 */
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

/**
 * @brief replaces the frist string in the file fro the second.
 * creates and opens the outfile.
 * goes throught the file content if founds the fist letter of s1, goes to the checkString function.
 * if the newString length is one it writes the first letter.
 * else it write sthe content to the new file 
 */
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