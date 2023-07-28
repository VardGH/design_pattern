#pragma once

#include "wheel.hpp"
#include "engine.hpp"
#include "body.hpp"
#include "car_model.hpp"

class Builder 
{
public:
    virtual Wheel* get_wheel() = 0;
    virtual Engine* get_engine() = 0;
    virtual Body* get_body() = 0;
    virtual CarModel* get_car_model() = 0;
};