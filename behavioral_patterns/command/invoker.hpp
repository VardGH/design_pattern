#ifndef INVOKER_HPP
#define INVOKER_HPP

#include <vector>
#include "command.hpp"

// Invoker class
class Invoker {
public:
    void add_command(Command* cmd);
    void execute_commands();
private:
    std::vector<Command*> commands;
};

#endif // INVOKER_HPP