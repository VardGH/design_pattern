#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "mediator.hpp"
#include "colleague.hpp"


class ChatRoom : public Mediator
{
public:
    void register_colleague(Colleague* colleague);
    void send(const std::string& message, Colleague* sender) override;

protected:
    std::vector<Colleague*> m_colleagues;
};