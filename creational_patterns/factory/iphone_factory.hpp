#pragma once

#include "phone_factory.hpp"
#include "iphone.hpp"

class iphone_factory : public phone_factory
{
public:
    Phone* create_phone() const override;
};