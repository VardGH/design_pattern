#include "iphone.hpp"
#include <iostream>

void IPhone::make_call() const
{
    std::cout << "Making a call from an IPhone phone." << std::endl;
}

void IPhone::send_message() const
{
    std::cout << "Sending a message from an IPhone phone." << std::endl;
}