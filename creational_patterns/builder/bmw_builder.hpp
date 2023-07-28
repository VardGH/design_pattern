#pragma once

#include "builder.hpp"
#include "wheel.hpp"
#include "engine.hpp"
#include "body.hpp"
#include "car_model.hpp"

class BMWBuilder : public Builder 
{
public:
    Wheel* get_wheel();
    Engine* get_engine();
    Body* get_body();
    CarModel* get_car_model();
};