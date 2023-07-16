#include "file_logger.hpp"

void FileLogger::log_message(const std::string& message)
{
    if (message == "File") {
        std::cout << "File logger" << std::endl;
    } else if (m_next_logger != nullptr) {
        m_next_logger->log_message(message);
    } else {
        std::cout << "End of chain" << std::endl;
    }
}