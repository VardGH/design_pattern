#pragma once

#include "phone.hpp"

class phone_factory
{
public:
    virtual Phone* create_phone() const = 0;
};