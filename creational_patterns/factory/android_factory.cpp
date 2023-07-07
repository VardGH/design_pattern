#include "android_factory.hpp"

Phone* android_phone_factory::create_phone() const
{
    return new Android();
}