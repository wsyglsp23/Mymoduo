#include "Logger.h"
#include <iostream>
void Logger::setLogLevel(int LogLevel)
{
    Loglevel_ = LogLevel;
}

void Logger::log(std::string msg)
{
    switch (Loglevel_)
    {
    case INFO:
        std::cout << "[INFO]:";
        break;
    case ERR:
        std::cout << "[ERR]:" ;
        break;
    case FATAL:
        std::cout << "[FATAL]:";
        break;
    case DBG:
        std::cout << "[DBG]:";
        break;
    default:
        break;
    }
    std::cout << "TIME: " << msg << std::endl;
}

Logger& Logger::getInstance()
{

    static Logger logger;
    return logger;

}
