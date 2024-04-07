#include "replace.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cerr << "the program runs with: ./string <filename> OldString NewString" << std::endl;
        return 1;
    }

    replacing(argv);
    
    return 0;
}