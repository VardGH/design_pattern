#pragma once

#include "android.hpp"
#include "phone_factory.hpp"

class android_phone_factory : public phone_factory
{
public:
    Phone* create_phone() const override;
};