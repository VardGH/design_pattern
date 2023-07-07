#pragma once

#include "phone.hpp"

class IPhone : public Phone
{
public:
    void make_call() const override;
    void send_message() const override;
};