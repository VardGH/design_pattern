#include "singleton.hpp"
#include <thread>

int main() {
    // Accessing the Singleton instance from multiple threads
    std::thread t1([]() {
        Singleton* s = Singleton::get_instance();
        s->do_something();
    });

    std::thread t2([]() {
        Singleton* s = Singleton::get_instance();
        s->do_something();
    });

    t1.join();
    t2.join();

    return 0;
}
