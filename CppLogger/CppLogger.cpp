#include <iostream>
#include "Logger.h"

int main(int argc, char* argv[])
{
    const char* message = "Hello World";

    Log(message, LOG_LEVEL_INFO);
    Log(message, LOG_LEVEL_DEBUG);
    Log(message, LOG_LEVEL_WARNING);
    Log(message, LOG_LEVEL_SUCCESS);
    Log(message, LOG_LEVEL_ERROR);
    Log(message, LOG_LEVEL_FATAL);

    std::cin.get();
    return 0;
}
