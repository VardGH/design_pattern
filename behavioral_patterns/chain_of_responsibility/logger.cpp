#include "logger.hpp"

Logger::Logger()
    : m_next_logger(nullptr)
{
}

void Logger::set_next_loggere(Logger* logger)
{
    m_next_logger = logger;
}
