#include "tesla_builder.hpp"

Wheel* TeslaBuilder::get_wheel() 
{
    Wheel* wheel = new Wheel();
    wheel->size = 19;
    return wheel;
}

Engine* TeslaBuilder::get_engine() 
{
    Engine* engine = new Engine();
    engine->horsepower = 450;
    return engine;
}

Body* TeslaBuilder::get_body() 
{
    Body* body = new Body();
    body->shape = "electric";
    return body;
}

CarModel* TeslaBuilder::get_car_model() 
{
    CarModel* car = new CarModel();
    car->body = get_body();
    car->engine = get_engine();
    car->wheels[0] = get_wheel();
    car->wheels[1] = get_wheel();
    car->wheels[2] = get_wheel();
    car->wheels[3] = get_wheel();
    return car;
}