#include <iostream>
#include "logger.hpp"
#include "file_logger.hpp"
#include "email_logger.hpp"
#include "console_logger.hpp"

int main()
{
    Logger* cl = new ConsoleLogger();
    Logger* fl = new FileLogger();
    Logger* el = new EmailLogger();

    cl->set_next_loggere(fl);
    fl->set_next_loggere(el);

    cl->log_message("Email");
    cl->log_message("File");
    cl->log_message("Console");

    delete cl;
    delete fl;
    delete el;

}