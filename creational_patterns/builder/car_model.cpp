#include "car_model.hpp"

void CarModel::specifications() 
{
    std::cout << "Body: " << body->shape << std::endl;
    std::cout << "Engine Horsepower: " << engine->horsepower << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::cout << "Tire " << (i + 1) << " Size: " << wheels[i]->size << std::endl;
    }
}