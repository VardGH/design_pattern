#include "chat_room.hpp"

void ChatRoom::send(const std::string& message, Colleague* sender)
{
    std::cout << "["<< sender->get_name() << "]: " << message << std::endl;

    for (const auto& colleague : m_colleagues) {
        if (colleague != sender) {
            colleague->receive(message);
        }
    }
}

void ChatRoom::register_colleague(Colleague* colleague)
{
    m_colleagues.push_back(colleague);
}