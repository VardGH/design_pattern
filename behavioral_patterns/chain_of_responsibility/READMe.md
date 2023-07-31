**Chain of Responsibility Logger**

This repository contains a simple C++ implementation of the Chain of Responsibility design pattern for logging messages. The Chain of Responsibility pattern allows a set of objects to be chained together, each capable of handling a specific type of request. If one object in the chain cannot handle the request, it passes the request to the next object in the chain until it finds an appropriate handler.

**Logger Class Hierarchy:**

The repository contains three concrete logger classes that inherit from an abstract base logger class:

1. **Logger (Abstract Base Logger Class):** This class defines the interface for all concrete loggers. It has a protected member variable, `nextLogger`, which holds a pointer to the next logger in the chain. It also defines a pure virtual function `logMessage`, which must be implemented by all concrete loggers.

2. **ConsoleLogger:** This concrete logger class handles log messages with the keyword "Console." If it receives a message that it can't handle, it forwards the message to the next logger in the chain.

3. **FileLogger:** This concrete logger class handles log messages with the keyword "File." If it receives a message that it can't handle, it forwards the message to the next logger in the chain.

4. **EmailLogger:** This concrete logger class handles log messages with the keyword "Email." If it receives a message that it can't handle, it forwards the message to the next logger in the chain.

**How to Use:**

In the `main` function of the `main.cpp` file, the chain of responsibility is set up as follows:

1. Instances of the three concrete loggers (ConsoleLogger, FileLogger, and EmailLogger) are created.

2. The chain of responsibility is established by setting the next logger for each concrete logger using the `setNextLogger` function.

3. Three log messages are sent to the `consoleLogger` instance, and the chain of responsibility handles them based on the message keywords ("Email," "Console," and "File").

4. The program cleans up memory by deleting the logger instances.