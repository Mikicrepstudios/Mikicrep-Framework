#include <fstream>
#include <string>

namespace files {
    bool CheckFile(std::string path) {
        std::ifstream file(path);
        if(file) return 1;
        else return 0;
    }
}