#pragma once

#include <string>

/**
 * @brief This struct contains all basic functions for file managment
 */
namespace files {
    int CreateFile(std::string path);
    int DeleteFile(std::string path);

    bool CheckFile(std::string path);
    std::string ReadFile(std::string path);
}