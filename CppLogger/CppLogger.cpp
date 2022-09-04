#include <iostream>
#include "Logger.h"

int main(int argc, char* argv[])
{
    MedLogger::Logger::SetMultithreading(true);
    const char* message = "Logging out of the box";
    
    MedLogger::Log(message, LOG_LEVEL_INFO);
    MedLogger::Log(message, LOG_LEVEL_DEBUG);
    MedLogger::Log(message, LOG_LEVEL_WARNING);
    MedLogger::Log(message, LOG_LEVEL_SUCCESS);
    MedLogger::Log(message, LOG_LEVEL_ERROR);
    MedLogger::Log(message, LOG_LEVEL_FATAL);

    message = "Logging only info and debug";
    std::cout << std::endl<< message << std::endl;
    MedLogger::Logger::SetLevel(LOG_LEVEL_INFO | LOG_LEVEL_DEBUG);
    
    MedLogger::Log(message, LOG_LEVEL_INFO);
    MedLogger::Log(message, LOG_LEVEL_DEBUG);
    MedLogger::Log(message, LOG_LEVEL_WARNING);
    MedLogger::Log(message, LOG_LEVEL_SUCCESS);
    MedLogger::Log(message, LOG_LEVEL_ERROR);
    MedLogger::Log(message, LOG_LEVEL_FATAL);
    
    
    message = "Disable logs";
    std::cout << std::endl<< message << std::endl;
    MedLogger::Logger::SetLevel(LOG_LEVEL_NONE);
    
    MedLogger::Log(message, LOG_LEVEL_INFO);
    MedLogger::Log(message, LOG_LEVEL_DEBUG);
    MedLogger::Log(message, LOG_LEVEL_WARNING);
    MedLogger::Log(message, LOG_LEVEL_SUCCESS);
    MedLogger::Log(message, LOG_LEVEL_ERROR);
    MedLogger::Log(message, LOG_LEVEL_FATAL);
    
    
    message = "Log everything";
    std::cout << std::endl<< message << std::endl;
    MedLogger::Logger::SetLevel(LOG_LEVEL_ALL);
    
    MedLogger::Log(message, LOG_LEVEL_INFO);
    MedLogger::Log(message, LOG_LEVEL_DEBUG);
    MedLogger::Log(message, LOG_LEVEL_WARNING);
    MedLogger::Log(message, LOG_LEVEL_SUCCESS);
    MedLogger::Log(message, LOG_LEVEL_ERROR);
    MedLogger::Log(message, LOG_LEVEL_FATAL);
    
    
    message = "Change success log color";
    std::cout << std::endl<< message << std::endl;
    MedLogger::Logger::SetLogLevelColor(LOG_LEVEL_SUCCESS, 66, 135, 245);
    MedLogger::Log(message, LOG_LEVEL_SUCCESS, false);


    std::cin.get();
    return 0;
}
