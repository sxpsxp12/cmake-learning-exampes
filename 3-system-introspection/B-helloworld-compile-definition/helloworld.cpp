#include <iostream>
#include <math.h>

void say_hello()
{

#if defined(HAVE_LOG) && defined(HAVE_EXP)
    int x = 25;
    double result = exp(log(x) * 0.5);
    std::cout << "Computing sqrt of " << x << " to be " << result
              << " using log and exp" << std::endl;
#else

    std::cout << "Hello, from helloworld!\n";
#endif
}
