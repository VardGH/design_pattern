#include <iostream>
#include "phone_factory.hpp"
#include "iphone_factory.hpp"
#include "android_factory.hpp"

int main()
{
    phone_factory* factory = new iphone_factory;
    Phone* phone = factory->create_phone();

    phone->make_call();
    phone->send_message();

    delete factory;
    delete phone;
}