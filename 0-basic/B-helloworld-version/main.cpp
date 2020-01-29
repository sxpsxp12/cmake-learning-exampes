#include <iostream>
#include "version.h"

int main()
{
    std::cout << "hello world" << std::endl;
    std::cout << "major:" << int(Helloworld_VERSION_MAJOR)  << std::endl;
    std::cout << "minor:" << int(Helloworld_VERSION_MINOR) << std::endl;
    return 0;
}