#include <iostream>

#include "builder.hpp"
#include "wheel.hpp"
#include "engine.hpp"
#include "body.hpp"
#include "car_model.hpp"
#include "director.hpp"
#include "bmw_builder.hpp"
#include "tesla_builder.hpp"


int main() 
{
    CarModel* car_model;
    Director director;
    BMWBuilder bmw_builder;
    TeslaBuilder tesla_builder;

    std::cout << "BMW" << std::endl;
    director.set_builder(&bmw_builder);
    car_model = director.get_car_model();
    car_model->specifications();

    std::cout << std::endl;

    std::cout << "Tesla" << std::endl;
    director.set_builder(&tesla_builder);
    car_model = director.get_car_model();
    car_model->specifications();

    delete car_model->body;
    delete car_model->engine;
    for (int i = 0; i < 4; i++) {
        delete car_model->wheels[i];
    }
    delete car_model;

    return 0;
}