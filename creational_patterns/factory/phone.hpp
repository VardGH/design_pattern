#pragma once

class Phone
{
public: 
    virtual void make_call() const = 0;
    virtual void send_message() const = 0;
};