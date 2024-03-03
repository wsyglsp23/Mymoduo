#pragma once

#include <string>

#include "nocpy.h"
/*log use format
    LOG_INFO("%s%d",arg1,arg2)
*/
#define LOG_INFO(LogmsgFormat,...)\
    do                  \
    { \
        Logger& logger = Logger::getInstance();\
        logger.setLogLevel(INFO);\
        char buf[1024] = {0};\
        snprintf(buf,1024,LogmsgFormat,##__VA_ARGS__);\
        logger.log(buf);\             
    } while (0)
#define LOG_ERR(LogmsgFormat,...)\
    do                  \
    { \
        Logger& logger = Logger::getInstance();\
        logger.setLogLevel(ERR);\
        char buf[1024] = {0};\
        snprintf(buf,1024,LogmsgFormat,##__VA_ARGS__);\
        logger.log(buf);\             
    } while (0)
#define LOG_FATAL(LogmsgFormat,...)\
    do                  \
    { \
        Logger& logger = Logger::getInstance();\
        logger.setLogLevel(FATAL);\
        char buf[1024] = {0};\
        snprintf(buf,1024,LogmsgFormat,##__VA_ARGS__);\
        logger.log(buf);\             
    } while (0)

#ifdef MODULEDBG
#define LOG_DBG(LogmsgFormat,...)\
    do                  \
    { \
        Logger& logger = Logger::getInstance();\
        logger.setLogLevel(DBG);\
        char buf[1024] = {0};\
        snprintf(buf,1024,LogmsgFormat,##__VA_ARGS__);\
        logger.log(buf);\             
    } while (0)
#endif // !MODULEDBG

enum Loglevel
{
    INFO,
    ERR,
    FATAL,
    DBG
};

class Logger : nocpy
{
public:
    void setLogLevel(int LogLever);
    void log(std::string msg);
    static Logger &getInstance();

private:
    Logger() = default;
    int Loglevel_;
};