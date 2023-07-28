#pragma once

#include "colleague.hpp"
#include <iostream>

class User : public Colleague
{
public:
    using::Colleague::Colleague;
public:
    void receive(const std::string& message) override;
};