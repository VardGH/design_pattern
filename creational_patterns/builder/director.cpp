#include "director.hpp"

void Director::set_builder(Builder* new_builder) 
{
    builder = new_builder;
}

CarModel* Director::get_car_model() 
{
    return builder->get_car_model();
}
