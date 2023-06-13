#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <string>

// Receiver class
class Receiver {
public:
    void open_file(const std::string& filename);
    void close_file(const std::string& filename);
};

// Command interface
class Command {
public:
    virtual ~Command() {}
    virtual void execute() = 0;
};

// Concrete command classes
class OpenFileCommand : public Command {
public:
    OpenFileCommand(Receiver* rec, const std::string& file);
    void execute() override;

private:
    Receiver* receiver;
    std::string filename;
};

class CloseFileCommand : public Command {
public:
    CloseFileCommand(Receiver* rec, const std::string& file);
    void execute() override;

private:
    Receiver* receiver;
    std::string filename;
};

#endif // COMMAND_HPP