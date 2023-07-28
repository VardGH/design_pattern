#include "user.hpp"

void receive(const std::string& message) 
{
    std::cout << "[" << this->get_name() << "]: " << message << std::endl;
}