**Mediator Pattern Example**

This repository contains a C++ implementation of the Mediator design pattern. The Mediator pattern promotes loose coupling between objects by centralizing communication between them through a mediator (a separate entity). This allows objects to interact without having direct references to each other.

**Components:**

1. **ChatMediator (Mediator Interface):**
   - This class defines the interface for concrete mediators and declares a pure virtual method `sendMessage` to send messages between users.

2. **ChatRoom (Concrete Mediator):**
   - The `ChatRoom` class is a concrete implementation of the `ChatMediator` interface. It maintains a list of users and provides methods to add users to the chat and to broadcast messages to all users except the sender.

3. **User (Colleague) Class:**
   - The `User` class represents the individual users participating in the chat. Each user has a name and a reference to the mediator (`ChatMediator`). Users can send messages to the chat, which are then relayed to other users via the mediator.

**How to Use:**

1. Create a `ChatRoom` instance, which will serve as the central mediator.

2. Create instances of the `User` class, passing their names and the `ChatRoom` instance (mediator) to their constructors.

3. Add the users to the chat room using the `addUser` method of the `ChatRoom` class.

4. Users can send messages to the chat room using the `send` method of the `User` class. The mediator (`ChatRoom`) will relay the message to all other users, excluding the sender.