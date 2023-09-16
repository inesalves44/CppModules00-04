#include "Replace.h"

int main(int argc, char *argv[])
{
    (void)argc;
    string s1 = argv[2];
    string s2 = argv[3];
    string test = ".replace";
    stringstream buffer;
    string s3 = argv[1] + test;
    std::string str;

    ifstream infile;
    infile.open(argv[1], ios::in);

    buffer << infile.rdbuf();
    str = buffer.str();

    Replace newClass = Replace(str, s1, s2, s3);
    newClass.ReplaceString();
    infile.close();
}