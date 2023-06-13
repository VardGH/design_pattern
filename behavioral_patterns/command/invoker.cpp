#include "invoker.hpp"

void Invoker::add_command(Command* cmd) {
    commands.push_back(cmd);
}

void Invoker::execute_commands() {
    for (Command* cmd : commands) {
        cmd->execute();
    }
    commands.clear();
}