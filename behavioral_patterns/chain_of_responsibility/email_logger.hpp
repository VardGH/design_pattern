#pragma once

#include "logger.hpp"
#include <iostream>
#include <string>

class EmailLogger : public Logger
{
public:
    virtual void log_message(const std::string& message) override;
};