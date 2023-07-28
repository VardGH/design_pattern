#pragma once

#include <string>
#include "mediator.hpp"

class Colleague
{
public:
    Colleague(const std::string& name, Mediator* mediator);

public:
    std::string get_name() const;

public:
    virtual void send(const std::string& message);
    virtual void receive(const std::string& message) = 0;

protected:
    std::string m_name;
    Mediator* m_mediator;
};