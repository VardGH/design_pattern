#include "android.hpp"
#include <iostream>

void Android::make_call() const
{
    std::cout << "Making a call from an Android phone." << std::endl;
}

void Android::send_message() const
{
    std::cout << "Sending a message from an Android phone." << std::endl;
}