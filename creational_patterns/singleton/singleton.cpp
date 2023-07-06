#include "singleton.hpp"

Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mutex;

Singleton* Singleton::get_instance()
{
    if(instance == nullptr) {
        std::lock_guard<std::mutex> lock(mutex);

        if(instance == nullptr) {
            instance = new Singleton;
        }
    }
    return instance;
}

Singleton::~Singleton()
{
    delete instance;
    instance = nullptr;
}

void Singleton::do_something()
{
    std::cout << "Do something" << std::endl;
}