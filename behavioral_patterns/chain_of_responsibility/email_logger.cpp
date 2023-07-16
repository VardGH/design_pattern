#include "email_logger.hpp"

void EmailLogger::log_message(const std::string& message)
{
    if (message == "Email") {
        std::cout << "Email logger" << std::endl;
    } else if (m_next_logger != nullptr) {
        m_next_logger->log_message(message);
    } else {
        std::cout << "End of chain" << std::endl;
    } 
}