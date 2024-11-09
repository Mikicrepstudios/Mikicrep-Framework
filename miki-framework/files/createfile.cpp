#include <fstream>
#include <string>

namespace files {
    int CreateFile(std::string path) {
        std::ofstream file(path);

        if (file) {
            file.close();
            return 0;
        }
        else return 1;

        return -69; // Uh oh something happened
    }
}