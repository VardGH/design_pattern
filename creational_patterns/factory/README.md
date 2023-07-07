# Factory Pattern - Phone Products

The Factory Pattern is a creational design pattern that provides an interface for creating objects without specifying their concrete classes. It encapsulates the object creation process and allows clients to create objects by calling a factory method.

## Description

In this example, we demonstrate the Factory Pattern with Phone Products. We have an abstract `Phone` class representing the common interface for phone products. Concrete phone products, such as `Android` and `IPhone`, inherit from the `Phone` class and implement their specific functionalities.

We also have an abstract `phone_factory` class, which defines the factory method `create_phone()` for creating phone products. Concrete phone factories, such as `android_phone_factory` and `iphone_factory`, inherit from the `phone_factory` class and provide the implementation for creating their respective phone products.

The client code in `main.cpp` demonstrates how to use the factory pattern. It creates a specific phone factory, invokes the `create_phone()` method to create a phone product, and uses the phone product's methods.