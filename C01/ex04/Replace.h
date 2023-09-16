#ifndef REPLACE_H
#define REPLACE_H

#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <sstream> 
using namespace std;

class Replace
{
    public:
        Replace(std::string str,std::string s1Class, std::string s2Class, std::string s3Class);
        void ReplaceString();
        ~Replace();

    private:
        std::string s1;
        std::string s2;
        std::string s3;
        std::string fileContent;
        int i;
        string CheckString();
};

#endif