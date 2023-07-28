#include <iostream>
#include "mediator.hpp"
#include "colleague.hpp"
#include "chat_room.hpp"
#include "user.hpp"


int main()
{
    ChatRoom chat_room;

    User user1("Alice", &chat_room);
    User user2("Bob", &chat_room);
    User user3("Charlie", &chat_room);

    chat_room.register_colleague(&user1);
    chat_room.register_colleague(&user2);
    chat_room.register_colleague(&user3);

    user1.send("Hello, everyone!");
    user2.send("Hey, Alice!");
    user3.send("Hi, Bob!");

    return 0;
}