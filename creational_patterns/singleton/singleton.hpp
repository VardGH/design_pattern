#pragma once 

#include <iostream>
#include <mutex>

class Singleton
{
public:
    Singleton() = default;
    ~Singleton();
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

public:
    static Singleton* get_instance();
    void do_something();

private:
    static Singleton* instance;
    static std::mutex mutex;
};              

