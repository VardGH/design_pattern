# Builder Design Pattern in C++

This is a C++ implementation of the Builder Design Pattern. The code demonstrates how to construct complex objects (car models) step-by-step while allowing different representations to be created using the same construction process. In this example, we build two types of car models: BMW and Tesla.

## How the Builder Pattern Works

The Builder Pattern is a creational design pattern that separates the construction of a complex object from its representation. It allows the same construction process to create different representations of the object.

In this code, the pattern consists of the following components:

1. **`Wheel`, `Engine`, `Body`, and `CarModel` classes**: These classes represent the individual components and the final product (car model).

2. **`Builder` interface**: The `Builder` class defines an interface with pure virtual functions for constructing the individual parts and the complete car model. The `BMWBuilder` and `TeslaBuilder` classes inherit from `Builder` and provide specific implementations to construct BMW and Tesla car models.

3. **`Director` class**: The `Director` class is responsible for managing the construction process. It holds a reference to the current builder and has a `set_builder()` method to switch the builder. The `get_car_model()` method returns the car model constructed by the current builder.