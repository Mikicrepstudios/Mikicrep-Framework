#include <fstream>
#include <string>

namespace files {
    void AppendFile(std::string path, std::string content) {
        std::ofstream file(path, std::ios::app);
        file << content;
        file.close();
    }
}