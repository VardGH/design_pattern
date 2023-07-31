## Strategy Pattern Example

The Strategy pattern defines a family of algorithms, encapsulates each one of them, and makes them interchangeable. The client can choose which algorithm to use at runtime.

## Components:

Strategy (Strategy Interface):

This class represents the interface for all concrete strategy classes. It declares a pure virtual method execute to be implemented by each concrete strategy.
Concrete Strategy Classes:

ConcreteStrategyAdd, ConcreteStrategySubtract, and ConcreteStrategyMultiply are three concrete strategy classes that implement the Strategy interface. Each of these classes represents a specific arithmetic operation (addition, subtraction, and multiplication) and provides its implementation of the execute method.
Context Class:

The Context class acts as a client and maintains a reference to a strategy object. It has a method set_strategy to set the desired strategy dynamically and a method execute_strategy to execute the strategy, which delegates the execution to the concrete strategy object.