#include "bmw_builder.hpp"

Wheel* BMWBuilder::get_wheel() 
{
    Wheel* wheel = new Wheel();
    wheel->size = 18;
    return wheel;
}

Engine* BMWBuilder::get_engine() 
{
    Engine* engine = new Engine();
    engine->horsepower = 300;
    return engine;
}

Body* BMWBuilder::get_body() 
{
    Body* body = new Body();
    body->shape = "sedan";
    return body;
}

CarModel* BMWBuilder::get_car_model() 
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