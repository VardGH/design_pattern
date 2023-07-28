#pragma once

#include <iostream>

#include "wheel.hpp"
#include "engine.hpp"
#include "body.hpp"

class CarModel 
{
public:
    Wheel* wheels[4];
    Engine* engine;
    Body* body;
    
public:
    void specifications();
};