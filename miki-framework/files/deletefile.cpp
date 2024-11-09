#include <cstdio>
#include <string>

namespace files {
    int DeleteFile(std::string path) {
        if (std::remove(path.c_str()) == 0) return 0;
        else return 1;

        return -69; // Uh oh something happened
    }
}