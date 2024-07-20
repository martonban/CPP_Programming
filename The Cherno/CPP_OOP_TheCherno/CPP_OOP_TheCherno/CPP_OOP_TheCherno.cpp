#include <iostream>



class Log {
public:
    enum Level {
        LevelError, LevelWarning, LevelInfo
    };
    

private:
    Level log_level = LevelInfo;

public:
    void set_level(Level level) {
        log_level = level;
    }

    void warn(const char* message) {
        if (log_level >= LevelWarning) {
            std::cout << "[WARNING]: " << message << std::endl;
        }
    }

    void info(const char* message) {
        if (log_level >= LevelInfo) {
            std::cout << "[INFO]: " << message << std::endl;
        }
    }

    void error(const char* message) {
        if (log_level >= LevelError) {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }
};

int main()
{

}
