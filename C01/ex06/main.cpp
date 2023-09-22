#include "Harl.h"

int main(int argc, char *argv[])
{
    Harl objects;

    (void)argc;
    objects.filter(argv[1]);
}