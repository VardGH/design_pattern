## Visitor Pattern Example

The Visitor pattern allows adding new operations to a group of classes without modifying their structure. It achieves this by separating the operations (visitor) from the classes being operated on (elements) in a flexible and extensible way.

## Components:

Visitor (Visitor Interface):

This class defines the interface for concrete visitors and declares virtual visit methods for each concrete shape class (Dot, Circle, Rectangle, and CompoundShape).
Shape (Element Interface):

This class represents the interface for all concrete shape classes (Dot, Circle, Rectangle, and CompoundShape). It declares a pure virtual method accept to be implemented by each concrete shape, which accepts a visitor as an argument.
Concrete Shape Classes:

Dot, Circle, Rectangle, and CompoundShape are concrete shape classes that implement the Shape interface. Each of these classes represents a specific shape and provides its implementation of the accept method, allowing a visitor to visit them.
Concrete Visitor Class:

XMLExportVisitor is a concrete visitor class that implements the Visitor interface. It provides specific implementations for each shape visit method to perform XML export for each shape.