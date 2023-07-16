#include "console_logger.hpp"

void ConsoleLogger::log_message(const std::string& message)
{
    if (message == "Console") {
        std::cout << "Console logger" << std::endl;
    } else if (m_next_logger != nullptr) {
        m_next_logger->log_message(message);
    } else {
        std::cout << "End of chain" << std::endl;
    }    
}