#pragma once

#include "logger.hpp"
#include <iostream>

class FileLogger : public Logger
{
public:
    virtual void log_message(const std::string& message) override;
};