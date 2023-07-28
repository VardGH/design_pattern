#include "colleague.hpp"

Colleague::Colleague(const std::string& name, Mediator& mediator)
    : m_name(name)
    , m_mediator(mediator)
{
}

std::string Colleague::get_name() const
{
    return m_name;
}

void Colleague::send(const std::string& message)
{
    m_mediator->send(message);
}