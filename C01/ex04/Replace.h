#ifndef REPLACE_H
#define REPLACE_H

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <sstream>

class Replace
{
    public:
        Replace(std::string str,std::string s1Class, std::string s2Class, std::string s3Class);
        void ReplaceString();
		void GetFileContents();
        ~Replace();

    private:
        std::string s1;
        std::string s2;
        std::string newFile;
		std::string fileName;
        std::string fileContent;
        int i;
        std::string CheckString();
};

#endif