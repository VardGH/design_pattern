#include "command.hpp"
#include "invoker.hpp"

int main() {
    Receiver receiver;

    OpenFileCommand open_file_command(&receiver, "file.txt");
    CloseFileCommand close_file_command(&receiver, "file.txt");

    Invoker invoker;
    invoker.add_command(&open_file_command);
    invoker.add_command(&close_file_command);
    invoker.execute_commands();

    return 0;
}