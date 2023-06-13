#include "command.hpp"

void Receiver::open_file(const std::string& filename) {
    std::cout << "Opening file: " << filename << std::endl;
}

void Receiver::close_file(const std::string& filename) {
    std::cout << "Closing file: " << filename << std::endl;
}

OpenFileCommand::OpenFileCommand(Receiver* rec, const std::string& file)
    : receiver(rec), filename(file) {}

void OpenFileCommand::execute() {
    receiver->open_file(filename);
}

CloseFileCommand::CloseFileCommand(Receiver* rec, const std::string& file)
    : receiver(rec), filename(file) {}

void CloseFileCommand::execute() {
    receiver->close_file(filename);
}