#include <iostream>
#include <string>

class Wheel 
{
public:
    int size;
};

class Engine 
{
public:
    int horsepower;
};

class Body 
{
public:
    std::string shape;
};

class CarModel 
{
public:
    Wheel* wheels[4];
    Engine* engine;
    Body* body;

    void specifications() {
        std::cout << "Body: " << body->shape << std::endl;
        std::cout << "Engine Horsepower: " << engine->horsepower << std::endl;
        for (int i = 0; i < 4; ++i) {
            std::cout << "Tire " << (i + 1) << " Size: " << wheels[i]->size << std::endl;
        }
    }
};

class Builder 
{
public:
    virtual Wheel* get_wheel() = 0;
    virtual Engine* get_engine() = 0;
    virtual Body* get_body() = 0;
    virtual CarModel* get_car_model() = 0;
};

class BMWBuilder : public Builder 
{
public:
    Wheel* get_wheel() {
        Wheel* wheel = new Wheel();
        wheel->size = 18;
        return wheel;
    }

    Engine* get_engine() {
        Engine* engine = new Engine();
        engine->horsepower = 300;
        return engine;
    }

    Body* get_body() {
        Body* body = new Body();
        body->shape = "sedan";
        return body;
    }

    CarModel* get_car_model() {
        CarModel* car = new CarModel();
        car->body = get_body();
        car->engine = get_engine();
        car->wheels[0] = get_wheel();
        car->wheels[1] = get_wheel();
        car->wheels[2] = get_wheel();
        car->wheels[3] = get_wheel();
        return car;
    }
};

class TeslaBuilder : public Builder 
{
public:
    Wheel* get_wheel() {
        Wheel* wheel = new Wheel();
        wheel->size = 19;
        return wheel;
    }

    Engine* get_engine() {
        Engine* engine = new Engine();
        engine->horsepower = 450;
        return engine;
    }

    Body* get_body() {
        Body* body = new Body();
        body->shape = "electric";
        return body;
    }

    CarModel* get_car_model() {
        CarModel* car = new CarModel();
        car->body = get_body();
        car->engine = get_engine();
        car->wheels[0] = get_wheel();
        car->wheels[1] = get_wheel();
        car->wheels[2] = get_wheel();
        car->wheels[3] = get_wheel();
        return car;
    }
};

class Director 
{
public:
    void set_builder(Builder* newBuilder) {
        builder = newBuilder;
    }

    CarModel* get_car_model() {
        return builder->get_car_model();
    }

private:
    Builder* builder;
};

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
