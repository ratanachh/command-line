#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>
#include <array>
#include <unistd.h>


std::string exec(const char* cmd) {
    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
    if (!pipe) {
        throw std::runtime_error("popen() failed!");
    }
    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }
    return result;
}

std::string get_current_dir() {
   char buff[FILENAME_MAX];
   getcwd( buff, FILENAME_MAX );
   std::string current_working_dir(buff);
   return current_working_dir;
}