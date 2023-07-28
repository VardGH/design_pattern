#pragma once

#include <string>
#include "colleague.hpp"

class Mediator
{
public:
    void send(const std::string& message, Colleague* sender);
};