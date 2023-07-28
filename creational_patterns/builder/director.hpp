#pragma once

#include "builder.hpp"
#include "car_model.hpp"

class Director 
{
public:
    void set_builder(Builder* new_builder);
    CarModel* get_car_model();

private:
    Builder* builder;
};