#include "iphone_factory.hpp"

Phone* iphone_factory::create_phone() const
{
    return new IPhone();
};