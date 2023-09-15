#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <sstream> 
using namespace std;

void replace(std::string str, std::string s1, std::string s2, string s3)
{
    int i = 0;
    int j = 0;
    int z = 0;
    ofstream outfile;
    outfile.open(s3, ios::out);


    while(str[i] != '\0')
    {
        if (str[i] == s1[0])
        {
            z = i;
            while (s1[j] == str[z])
            {
                j++;
                z++;
            }

            if (j == s1.length() - 1)
            {
                outfile << s2;
                i = z;
            }
            else
            {
                outfile << str[i];
                i++;
            }
            z = 0;
            j = 0;
        }
        else
        {
            outfile << str[i];
            i++;
        }
           
    }
}

int main(int argc, char *argv[])
{
    (void)argc;
    string s1 = argv[2];
    string s2 = argv[3];
    string test = ".replace";
    stringstream buffer;
    string s3 = argv[1] + test;

    ifstream infile;
    infile.open(argv[1], ios::in);

    buffer << infile.rdbuf();
    std::string str = buffer.str();

    replace(str, s1, s2, s3);
}