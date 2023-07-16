#pragma once

#include <iostream>
#include <string>

class Logger
{
public:
    Logger();
public:
    void set_next_loggere(Logger* logger);
    virtual void log_message(const std::string& message) = 0;
protected:
    Logger* m_next_logger;
};