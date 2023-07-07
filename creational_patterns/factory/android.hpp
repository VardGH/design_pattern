#pragma once

#include "phone.hpp"

class Android : public Phone
{
public: 
    void make_call() const override;
    void send_message() const override;
};