#include <fstream>
#include <string>

namespace files {
    void WriteFile(std::string path, std::string content) {
        std::ofstream file(path);
        file << content;
        file.close();
    }
}