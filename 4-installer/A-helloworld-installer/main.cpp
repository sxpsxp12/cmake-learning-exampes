#include <iostream>
#ifdef USE_SAYHELLO
#include "helloworld.h"
#endif

int main(int, char **)
{

#ifdef USE_SAYHELLO
    say_hello();
#else
    std::cout << "say hello world" << std::endl;
#endif
    return 0;
}
