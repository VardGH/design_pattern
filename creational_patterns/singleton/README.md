# Thread-Safe Singleton Pattern

The Thread-Safe Singleton pattern is a design pattern that ensures the creation of only one instance of a class while providing thread safety in a multi-threaded environment.

## Description

The Singleton pattern is a creational pattern that restricts the instantiation of a class to a single object. It is often used when there is a need for a single instance that is shared across multiple parts of the application.

In a multi-threaded environment, it is essential to ensure thread safety when creating the Singleton instance. Without proper synchronization, multiple threads might simultaneously enter the creation block and create multiple instances of the Singleton, violating the Singleton pattern's intent.

The thread-safe Singleton pattern addresses this issue by introducing synchronization mechanisms to guarantee that only one instance is created, even in a multi-threaded scenario.

## Implementation

The thread-safe Singleton pattern can be implemented using double-checked locking combined with lazy initialization and a mutex for synchronization.

The following steps are typically involved in implementing a thread-safe Singleton:

1. Create a private static member variable in the Singleton class to hold the instance.
2. Create a private static mutex to ensure exclusive access during instance creation.
3. Implement a public static method, often named `get_instance()`, to provide access to the Singleton instance.
4. In the `get_instance()` method, use double-checked locking to ensure only one instance is created. Check if the instance is null, lock the mutex, and then perform another null check inside the lock. If the instance is still null, create the instance.
5. In the destructor of the Singleton class, properly destroy and clean up the instance.

## Usage

To use the thread-safe Singleton pattern, follow these steps:

1. Include the Singleton class header file in your project.
2. Access the Singleton instance using the `get_instance()` method.
3. Use the Singleton instance to access its methods or properties.

## Building and Running the Program

- g++ singleton.cpp main.cpp -o singleton -std=c++11 -pthread