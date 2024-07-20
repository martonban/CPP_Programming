#include <iostream>

class Log {
public:
    const int log_level_warning = 1;
    const int log_level_error = 0;
    const int log_level_info = 2;

private:
    int log_level = log_level_info;

public:
    void set_level(int level) {
        log_level = level;
    }

    void warn(const char* message) {
        if (log_level >= log_level_warning) {
            std::cout << "[WARNING]: " << message << std::endl;
        }
    }

    void info(const char* message) {
        if (log_level >= log_level_info) {
            std::cout << "[INFO]: " << message << std::endl;
        }
    }

    void error(const char* message) {
        if (log_level >= log_level_error) {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }



};

int main()
{
    Log log;
    log.set_level(log.log_level_warning);
    log.error("Hello");
}
